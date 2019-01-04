#ifndef GENERATED_ASN1SCC_PRESSURE_H
#define GENERATED_ASN1SCC_PRESSURE_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "taste-types.h"
#include "Time.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccTime timestamp;
    asn1SccT_Double pascals;
} asn1SccPressure;

#define asn1SccPressure_REQUIRED_BYTES_FOR_ENCODING       25 
#define asn1SccPressure_REQUIRED_BITS_FOR_ENCODING        200
#define asn1SccPressure_REQUIRED_BYTES_FOR_ACN_ENCODING   25 
#define asn1SccPressure_REQUIRED_BITS_FOR_ACN_ENCODING    200
#define asn1SccPressure_REQUIRED_BYTES_FOR_XER_ENCODING   207

void asn1SccPressure_Initialize(asn1SccPressure* pVal);
flag asn1SccPressure_IsConstraintValid(const asn1SccPressure* val, int* pErrCode);


 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccPressure_Encode(const asn1SccPressure* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPressure_Decode(asn1SccPressure* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPressure_ACN_Encode(const asn1SccPressure* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPressure_ACN_Decode(asn1SccPressure* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif