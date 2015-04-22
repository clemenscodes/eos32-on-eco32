/*
 * Remove file or directory
 */

#include <eos32.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	errcode;

void rm(char arg[], int fflg, int rflg, int iflg, int level);
int dotname(char *s);
int rmdir(char *f, int iflg);
int yes(void);

int main(int argc, char *argv[])
{
	register char *arg;
	int fflg, iflg, rflg;

	fflg = 0;
	if (isatty(0) == 0)
		fflg++;
	iflg = 0;
	rflg = 0;
	if(argc>1 && argv[1][0]=='-') {
		arg = *++argv;
		argc--;
		while(*++arg != '\0')
			switch(*arg) {
			case 'f':
				fflg++;
				break;
			case 'i':
				iflg++;
				break;
			case 'r':
				rflg++;
				break;
			default:
				printf("rm: unknown option %s\n", *argv);
				exit(1);
			}
	}
	while(--argc > 0) {
		if(!strcmp(*++argv, "..")) {
			fprintf(stderr, "rm: cannot remove `..'\n");
			continue;
		}
		rm(*argv, fflg, rflg, iflg, 0);
	}

	exit(errcode);
	return 0;
}

void rm(char arg[], int fflg, int rflg, int iflg, int level)
{
	struct stat buf;
	struct direct direct;
	char name[100];
	int d;

	if(stat(arg, &buf)) {
		if (fflg==0) {
			printf("rm: %s nonexistent\n", arg);
			++errcode;
		}
		return;
	}
	if ((buf.st_mode&S_IFMT) == S_IFDIR) {
		if(rflg) {
			if (access(arg, 02) < 0) {
				if (fflg==0)
					printf("%s not changed\n", arg);
				errcode++;
				return;
			}
			if(iflg && level!=0) {
				printf("directory %s: ", arg);
				if(!yes())
					return;
			}
			if((d=open(arg, 0)) < 0) {
				printf("rm: %s: cannot read\n", arg);
				exit(1);
			}
			while(read(d, (char *)&direct, sizeof(direct)) == sizeof(direct)) {
				if(direct.d_ino != 0 && !dotname(direct.d_name)) {
					sprintf(name, "%s/%.14s", arg, direct.d_name);
					rm(name, fflg, rflg, iflg, level+1);
				}
			}
			close(d);
			errcode += rmdir(arg, iflg);
			return;
		}
		printf("rm: %s directory\n", arg);
		++errcode;
		return;
	}

	if(iflg) {
		printf("%s: ", arg);
		if(!yes())
			return;
	}
	else if(!fflg) {
		if (access(arg, 02)<0) {
			printf("rm: %s %o mode ", arg, buf.st_mode&0777);
			if(!yes())
				return;
		}
	}
	if(unlink(arg) && (fflg==0 || iflg)) {
		printf("rm: %s not removed\n", arg);
		++errcode;
	}
}

int dotname(char *s)
{
	if(s[0] == '.')
		if(s[1] == '.')
			if(s[2] == '\0')
				return(1);
			else
				return(0);
		else if(s[1] == '\0')
			return(1);
	return(0);
}

int rmdir(char *f, int iflg)
{
	int status, i;

	if(dotname(f))
		return(0);
	if(iflg) {
		printf("%s: ", f);
		if(!yes())
			return(0);
	}
	while((i=fork()) == -1)
		sleep(3);
	if(i) {
		wait(&status);
		return(status);
	}
	execl("/bin/rmdir", "rmdir", f, 0);
	execl("/usr/bin/rmdir", "rmdir", f, 0);
	printf("rm: can't find rmdir\n");
	exit(1);
	return 1;
}

int yes(void)
{
	int i, b;

	i = b = getchar();
	while(b != '\n' && b != EOF)
		b = getchar();
	return(i == 'y');
}
