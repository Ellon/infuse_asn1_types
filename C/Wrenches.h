#ifndef GENERATED_ASN1SCC_WRENCHES_H
#define GENERATED_ASN1SCC_WRENCHES_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "taste-types.h"
#include "Wrench.h"
#include "Time.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {    int nCount; 
    
    asn1SccWrench arr[60];
} asn1SccWrenches_wrenches;

#define asn1SccWrenches_wrenches_REQUIRED_BYTES_FOR_ENCODING       5401 
#define asn1SccWrenches_wrenches_REQUIRED_BITS_FOR_ENCODING        43206
#define asn1SccWrenches_wrenches_REQUIRED_BYTES_FOR_ACN_ENCODING   5401 
#define asn1SccWrenches_wrenches_REQUIRED_BITS_FOR_ACN_ENCODING    43206
#define asn1SccWrenches_wrenches_REQUIRED_BYTES_FOR_XER_ENCODING   35559

void asn1SccWrenches_wrenches_Initialize(asn1SccWrenches_wrenches* pVal);
flag asn1SccWrenches_wrenches_IsConstraintValid(const asn1SccWrenches_wrenches* val, int* pErrCode);
#ifndef ERR_asn1SccWrenches_wrenches 
#define ERR_asn1SccWrenches_wrenches		1001  /*(SIZE(1 .. maxWrenchesSize))*/
#endif

typedef struct {
    asn1SccT_String vector_name;
    asn1SccTime timestamp;
    asn1SccWrenches_wrenches wrenches;
} asn1SccWrenches;

#define asn1SccWrenches_REQUIRED_BYTES_FOR_ENCODING       5670 
#define asn1SccWrenches_REQUIRED_BITS_FOR_ENCODING        45359
#define asn1SccWrenches_REQUIRED_BYTES_FOR_ACN_ENCODING   5670 
#define asn1SccWrenches_REQUIRED_BITS_FOR_ACN_ENCODING    45359
#define asn1SccWrenches_REQUIRED_BYTES_FOR_XER_ENCODING   36218

void asn1SccWrenches_Initialize(asn1SccWrenches* pVal);
flag asn1SccWrenches_IsConstraintValid(const asn1SccWrenches* val, int* pErrCode);


extern const asn1SccT_UInt32 maxWrenchesSize; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccWrenches_wrenches_Encode(const asn1SccWrenches_wrenches* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccWrenches_wrenches_Decode(asn1SccWrenches_wrenches* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccWrenches_wrenches_ACN_Encode(const asn1SccWrenches_wrenches* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccWrenches_wrenches_ACN_Decode(asn1SccWrenches_wrenches* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccWrenches_Encode(const asn1SccWrenches* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccWrenches_Decode(asn1SccWrenches* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccWrenches_ACN_Encode(const asn1SccWrenches* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccWrenches_ACN_Decode(asn1SccWrenches* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif
