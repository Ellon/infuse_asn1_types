#!/bin/bash
#xma@spaceapplications.com
#This file calls the ASN to C compiler binary
#It needs to be called whenever a new ASN type is added to /Common/Types/Asn

#exit immediately if a simple command exits with a nonzero exit value.
set -e

SOURCE="${BASH_SOURCE[0]}"
BASE_DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"

#output directory where the files will be uncompressed

echo "$BASE_DIR"

#set ASN and C diretories
ASN_DIR=$BASE_DIR/ASN.1
C_DIR=$BASE_DIR/C
ASN1SCC=asn1scc

rm -rf $C_DIR/*
mkdir -p $C_DIR

# binary can be compiled from https://github.com/ttsiodras/asn1scc
# or downloaded from https://download.tuxfamily.org/taste/ASN1SCC/
if [ ! -d "$ASN1SCC" ]; then
	echo "Downloading compiler"
	wget https://download.tuxfamily.org/taste/ASN1SCC/ASN1SCC-latest.tgz
	tar -xf ASN1SCC-latest.tgz
	rm ASN1SCC-latest.tgz
	echo "Done."
else
	echo "Reusing compiler in folder $ASN1SCC"
fi
#
#
#Compile ASN files To C
# has to be a oneliner, else the compiler misses definitions
echo "Compiling $ASN_DIR to $C_DIR"
asnFiles=`find $ASN_DIR -name '*.asn'`
#echo $asnFiles
mono ./asn1scc/asn1.exe $asnFiles -c -uPER -o $C_DIR
echo "Done."

