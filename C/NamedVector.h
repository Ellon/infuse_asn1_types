#ifndef GENERATED_ASN1SCC_NAMEDVECTOR_H
#define GENERATED_ASN1SCC_NAMEDVECTOR_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "taste-types.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccT_String nameString;
} asn1SccInvalidName;

#define asn1SccInvalidName_REQUIRED_BYTES_FOR_ENCODING       258 
#define asn1SccInvalidName_REQUIRED_BITS_FOR_ENCODING        2057
#define asn1SccInvalidName_REQUIRED_BYTES_FOR_ACN_ENCODING   258 
#define asn1SccInvalidName_REQUIRED_BITS_FOR_ACN_ENCODING    2057
#define asn1SccInvalidName_REQUIRED_BYTES_FOR_XER_ENCODING   564

void asn1SccInvalidName_Initialize(asn1SccInvalidName* pVal);
flag asn1SccInvalidName_IsConstraintValid(const asn1SccInvalidName* val, int* pErrCode);


 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccInvalidName_Encode(const asn1SccInvalidName* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccInvalidName_Decode(asn1SccInvalidName* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccInvalidName_ACN_Encode(const asn1SccInvalidName* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccInvalidName_ACN_Decode(asn1SccInvalidName* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif
