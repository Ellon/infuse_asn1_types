#ifndef GENERATED_ASN1SCC_SONAR_H
#define GENERATED_ASN1SCC_SONAR_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "Angle.h"
#include "taste-types.h"
#include "Time.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {    int nCount; 
    
    asn1SccT_Float arr[60];
} asn1SccSonar_bins;

#define asn1SccSonar_bins_REQUIRED_BYTES_FOR_ENCODING       781 
#define asn1SccSonar_bins_REQUIRED_BITS_FOR_ENCODING        6246
#define asn1SccSonar_bins_REQUIRED_BYTES_FOR_ACN_ENCODING   781 
#define asn1SccSonar_bins_REQUIRED_BITS_FOR_ACN_ENCODING    6246
#define asn1SccSonar_bins_REQUIRED_BYTES_FOR_XER_ENCODING   4165

void asn1SccSonar_bins_Initialize(asn1SccSonar_bins* pVal);
flag asn1SccSonar_bins_IsConstraintValid(const asn1SccSonar_bins* val, int* pErrCode);
#ifndef ERR_asn1SccSonar_bins 
#define ERR_asn1SccSonar_bins		1001  /*(SIZE(1 .. maxSonarSize))*/
#endif

typedef struct {    int nCount; 
    
    asn1SccAngle arr[60];
} asn1SccSonar_bearings;

#define asn1SccSonar_bearings_REQUIRED_BYTES_FOR_ENCODING       781 
#define asn1SccSonar_bearings_REQUIRED_BITS_FOR_ENCODING        6246
#define asn1SccSonar_bearings_REQUIRED_BYTES_FOR_ACN_ENCODING   781 
#define asn1SccSonar_bearings_REQUIRED_BITS_FOR_ACN_ENCODING    6246
#define asn1SccSonar_bearings_REQUIRED_BYTES_FOR_XER_ENCODING   4593

void asn1SccSonar_bearings_Initialize(asn1SccSonar_bearings* pVal);
flag asn1SccSonar_bearings_IsConstraintValid(const asn1SccSonar_bearings* val, int* pErrCode);
#ifndef ERR_asn1SccSonar_bearings 
#define ERR_asn1SccSonar_bearings		1002  /*(SIZE(1 .. maxSonarSize))*/
#endif

typedef struct {    int nCount; 
    
    asn1SccTime arr[60];
} asn1SccSonar_timestamps;

#define asn1SccSonar_timestamps_REQUIRED_BYTES_FOR_ENCODING       721 
#define asn1SccSonar_timestamps_REQUIRED_BITS_FOR_ENCODING        5766
#define asn1SccSonar_timestamps_REQUIRED_BYTES_FOR_ACN_ENCODING   721 
#define asn1SccSonar_timestamps_REQUIRED_BITS_FOR_ACN_ENCODING    5766
#define asn1SccSonar_timestamps_REQUIRED_BYTES_FOR_XER_ENCODING   6457

void asn1SccSonar_timestamps_Initialize(asn1SccSonar_timestamps* pVal);
flag asn1SccSonar_timestamps_IsConstraintValid(const asn1SccSonar_timestamps* val, int* pErrCode);
#ifndef ERR_asn1SccSonar_timestamps 
#define ERR_asn1SccSonar_timestamps		1003  /*(SIZE(1 .. maxSonarSize))*/
#endif

typedef struct {
    asn1SccTime ref_time;
    asn1SccSonar_timestamps timestamps;
    asn1SccTime bin_duration;
    asn1SccAngle beam_width;
    asn1SccAngle beam_height;
    asn1SccSonar_bearings bearings;
    asn1SccT_Float speed_of_sound;
    asn1SccT_UInt32 bin_count;
    asn1SccT_UInt32 beam_count;
    asn1SccSonar_bins bins;
} asn1SccSonar;

#define asn1SccSonar_REQUIRED_BYTES_FOR_ENCODING       2354 
#define asn1SccSonar_REQUIRED_BITS_FOR_ENCODING        18826
#define asn1SccSonar_REQUIRED_BYTES_FOR_ACN_ENCODING   2354 
#define asn1SccSonar_REQUIRED_BITS_FOR_ACN_ENCODING    18826
#define asn1SccSonar_REQUIRED_BYTES_FOR_XER_ENCODING   15777

void asn1SccSonar_Initialize(asn1SccSonar* pVal);
flag asn1SccSonar_IsConstraintValid(const asn1SccSonar* val, int* pErrCode);


extern const asn1SccT_UInt32 maxSonarSize; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccSonar_bins_Encode(const asn1SccSonar_bins* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_bins_Decode(asn1SccSonar_bins* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_bins_ACN_Encode(const asn1SccSonar_bins* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_bins_ACN_Decode(asn1SccSonar_bins* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_bearings_Encode(const asn1SccSonar_bearings* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_bearings_Decode(asn1SccSonar_bearings* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_bearings_ACN_Encode(const asn1SccSonar_bearings* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_bearings_ACN_Decode(asn1SccSonar_bearings* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_timestamps_Encode(const asn1SccSonar_timestamps* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_timestamps_Decode(asn1SccSonar_timestamps* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_timestamps_ACN_Encode(const asn1SccSonar_timestamps* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_timestamps_ACN_Decode(asn1SccSonar_timestamps* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_Encode(const asn1SccSonar* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_Decode(asn1SccSonar* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccSonar_ACN_Encode(const asn1SccSonar* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccSonar_ACN_Decode(asn1SccSonar* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif
