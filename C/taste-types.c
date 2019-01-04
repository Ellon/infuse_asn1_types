/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "taste-types.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_Int32_Initialize(asn1SccT_Int32* pVal)
{
    *pVal = (asn1SccT_Int32) -2147483648LL;
}
#endif

 
flag asn1SccT_Int32_IsConstraintValid(const asn1SccT_Int32* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (-2147483648LL <= *pVal && *pVal <= 2147483647LL);
	*pErrCode = ret ? 0 : ERR_asn1SccT_Int32;

	return ret;
}

flag asn1SccT_Int32_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -2147483648LL, 2147483647LL);
    }

	return ret;
}

flag asn1SccT_Int32_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
	*pErrCode = ret ? 0 : 272367617;

	return ret;
}

flag asn1SccT_Int32_ACN_Encode(const asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_Int32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -2147483648LL, 2147483647LL);
    }

	return ret;
}

flag asn1SccT_Int32_ACN_Decode(asn1SccT_Int32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -2147483648LL, 2147483647LL);
    *pErrCode = ret ? 0 : 272367618;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_UInt32_Initialize(asn1SccT_UInt32* pVal)
{
    *pVal = (asn1SccT_UInt32) 0;
}
#endif

 
flag asn1SccT_UInt32_IsConstraintValid(const asn1SccT_UInt32* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (0 <= *pVal && *pVal <= 4294967295LL);
	*pErrCode = ret ? 0 : ERR_asn1SccT_UInt32;

	return ret;
}

flag asn1SccT_UInt32_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 4294967295LL);
    }

	return ret;
}

flag asn1SccT_UInt32_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
	*pErrCode = ret ? 0 : 272367619;

	return ret;
}

flag asn1SccT_UInt32_ACN_Encode(const asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_UInt32_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 4294967295LL);
    }

	return ret;
}

flag asn1SccT_UInt32_ACN_Decode(asn1SccT_UInt32* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 4294967295LL);
    *pErrCode = ret ? 0 : 272367620;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_Int8_Initialize(asn1SccT_Int8* pVal)
{
    *pVal = (asn1SccT_Int8) -128;
}
#endif

 
flag asn1SccT_Int8_IsConstraintValid(const asn1SccT_Int8* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (-128 <= *pVal && *pVal <= 127);
	*pErrCode = ret ? 0 : ERR_asn1SccT_Int8;

	return ret;
}

flag asn1SccT_Int8_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -128, 127);
    }

	return ret;
}

flag asn1SccT_Int8_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
	*pErrCode = ret ? 0 : 272367621;

	return ret;
}

flag asn1SccT_Int8_ACN_Encode(const asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_Int8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, *pVal, -128, 127);
    }

	return ret;
}

flag asn1SccT_Int8_ACN_Decode(asn1SccT_Int8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, pVal, -128, 127);
    *pErrCode = ret ? 0 : 272367622;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_UInt8_Initialize(asn1SccT_UInt8* pVal)
{
    *pVal = (asn1SccT_UInt8) 0;
}
#endif

 
flag asn1SccT_UInt8_IsConstraintValid(const asn1SccT_UInt8* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (0 <= *pVal && *pVal <= 255);
	*pErrCode = ret ? 0 : ERR_asn1SccT_UInt8;

	return ret;
}

flag asn1SccT_UInt8_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 255);
    }

	return ret;
}

flag asn1SccT_UInt8_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
	*pErrCode = ret ? 0 : 272367623;

	return ret;
}

flag asn1SccT_UInt8_ACN_Encode(const asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_UInt8_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, *pVal, 0, 255);
    }

	return ret;
}

flag asn1SccT_UInt8_ACN_Decode(asn1SccT_UInt8* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, pVal, 0, 255);
    *pErrCode = ret ? 0 : 272367624;
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccT_Boolean_Initialize(asn1SccT_Boolean* pVal)
{
    *pVal = (asn1SccT_Boolean) FALSE;
}
#endif

 
flag asn1SccT_Boolean_IsConstraintValid(const asn1SccT_Boolean* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = TRUE; *pErrCode = 0;

	return ret;
}

flag asn1SccT_Boolean_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_AppendBit(pBitStrm,*pVal);
    }

	return ret;
}

flag asn1SccT_Boolean_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = BitStream_ReadBit(pBitStrm, pVal);
	*pErrCode = ret ? 0 : 272367625;

	return ret;
}

flag asn1SccT_Boolean_ACN_Encode(const asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccT_Boolean_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    {
	    	static byte true_data[] = {0x80};
	    	static byte false_data[] = {0x7F};
	        byte* tmp = *pVal ? true_data : false_data; 
	        BitStream_AppendBits(pBitStrm, tmp, 1);
	    }
    }

	return ret;
}

flag asn1SccT_Boolean_ACN_Decode(asn1SccT_Boolean* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    {
    	static byte tmp[] = {0x80};
    	ret = BitStream_ReadBitPattern(pBitStrm, tmp, 1, pVal);
        *pErrCode = ret ? 0 : 272367626;
    }
    return ret;
}

