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
ASN1_DIR=$BASE_DIR/ASN.1
ASN1_OUT_DIR=$BASE_DIR/C
ASN1SCC=asn1scc

echo "Input directory (ASN.1): ${ASN1_DIR}"
echo "Output directory (C):    ${ASN1_OUT_DIR}"

rm -rf "${ASN1_OUT_DIR}"
mkdir -p "${ASN1_OUT_DIR}"
#
#
# The ASN1SCC compiler can be built from its sources cloned from https://github.
# com/ttsiodras/asn1scc or downloaded in precompiled form from https://download.
# tuxfamily.org/taste/ASN1SCC
ASN1_COMPILER=asn1scc/asn1.exe
if [[ -f "${ASN1_COMPILER}" ]]; then
  echo "ASN1SCC compiler: ${ASN1_COMPILER}"
else
  echo "ASN1SCC compiler not found in current directory"
  echo "Downloading ASN1SCC compiler"
  wget --quiet https://download.tuxfamily.org/taste/ASN1SCC/ASN1SCC-latest.tgz
  echo "Downloading ASN1SCC compiler: done"
  echo "Extracting ASN1SCC compiler in current directory"
  tar xf ASN1SCC-latest.tgz
  rm -f ASN1SCC-latest.tgz
  echo "Extracting ASN1SCC compiler in current directory: done"
fi

# Compile ASN.1 files to C files
ASN1_PREFIX=asn1Scc
echo "Compiling ASN.1 data types to C"
find "${ASN1_DIR}" -name \*.asn -print0 |
  xargs -0 mono "${ASN1_COMPILER}" \
    -c -typePrefix ${ASN1_PREFIX} -uPER -wordSize 8 -ACN -o "${ASN1_OUT_DIR}"
echo "Compiling ASN.1 data types to C: done"

