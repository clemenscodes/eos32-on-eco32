ROOTFS=/usr/install/rootfs

echo "### W A R N I N G"
echo "This CHEAT MODE install script will use the cross-compiled binaries from the"
echo "host system to assemble the new installation. Its only purpose is time-saving."
echo ""

echo "## Step 2.0: Compile kernel sources..."
cp /boot/eos32.bin /usr/src/kernel/src/eos32.bin
cp /boot/eos32.map /usr/src/kernel/src/eos32.map

echo "## Step 2.1: Compile the init binary"
cd /usr/src/bin/init; make

echo "## Step 2.2: Compile getty"
cd /usr/src/bin/getty; make

echo "## Step 2.3: Compile userland commands"
echo " sh..."
cp /bin/sh /usr/src/bin/sh/sh
echo " ls..."
cp /bin/ls /usr/src/bin/ls/ls
echo " echo..."
cp /bin/echo /usr/src/bin/echo/echo
echo " cat..."
cp /bin/cat /usr/src/bin/cat/cat
echo " joe..."
cp /bin/joe /usr/src/bin/joe/joe
echo " lcc..."
mkdir /usr/src/bin/lcc/build
cp /bin/lcc /usr/src/bin/lcc/build/lcc
cp /bin/cpp /usr/src/bin/lcc/build/cpp
cp /bin/rcc /usr/src/bin/lcc/build/rcc
cp /bin/lburg /usr/src/bin/lcc/build/lburg
echo " as..."
cp /bin/as /usr/src/bin/as/as
echo " ld..."
cp /bin/ld /usr/src/bin/ld/ld

echo "## Step 2.4: Compile the C standard library"
cp /usr/lib/libc.a /usr/src/lib/libc.a