/*
 * UNIX shell
 *
 * S. R. Bourne
 * Bell Telephone Laboratories
 *
 */

#include <eos32.h>
#include	"defs.h"

CHAR		numbuf[6];


/* printing and io conversion */

VOID newline(VOID)
{	prc(NL);
}

VOID blank(VOID)
{	prc(SP);
}

VOID prp(VOID)
{
	IF (flags&prompt)==0 ANDF cmdadr
	THEN	prs(cmdadr); prs(colon);
	FI
}

VOID	prs(STRING as)
{
	REG STRING	s;

	IF s=as
	THEN	write(output,s,length(s)-1);
	FI
}

VOID	prc(CHAR c)
{
	IF c
	THEN	write(output,&c,1);
	FI
}

VOID prt(L_INT t)
{
	REG INT	hr, min, sec;

	t += 30; t /= 60;
	sec=t%60; t /= 60;
	min=t%60;
	IF hr=t/60
	THEN	prn(hr); prc('h');
	FI
	prn(min); prc('m');
	prn(sec); prc('s');
}

VOID prn(INT n)
{
	itos(n); prs(numbuf);
}

VOID itos(INT n)
{
	REG char *abuf; REG POS a, i; INT pr, d;
	abuf=numbuf; pr=FALSE; a=n;
	FOR i=10000; i!=1; i/=10
	DO	IF (pr |= (d=a/i)) THEN *abuf++=d+'0' FI
		a %= i;
	OD
	*abuf++=a+'0';
	*abuf++=0;
}

INT stoi(STRING icp)
{
	REG CHAR	*cp = icp;
	REG INT		r = 0;
	REG CHAR	c;

	WHILE (c = *cp, digit(c)) ANDF c ANDF r>=0
	DO r = r*10 + c - '0'; cp++ OD
	IF r<0 ORF cp==icp
	THEN	failed(icp,badnum);
	ELSE	return(r);
	FI
	/* HG: never reached */
	return 0;
}
