/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Pressure.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPressure_Initialize(asn1SccPressure* pVal)
{
    *pVal = (asn1SccPressure) {
    .timestamp = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .pascals = 0.00000000000000000000E+000
};
}
#endif

 
flag asn1SccPressure_IsConstraintValid(const asn1SccPressure* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccTime_IsConstraintValid(&pVal->timestamp, pErrCode);
	if (ret) {
	    ret = asn1SccT_Double_IsConstraintValid(&pVal->pascals, pErrCode);
	
	}

	return ret;
}

flag asn1SccPressure_Encode(const asn1SccPressure* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPressure_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode timestamp */
	    ret = asn1SccTime_Encode(&pVal->timestamp, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode pascals */
	        ret = asn1SccT_Double_Encode(&pVal->pascals, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccPressure_Decode(asn1SccPressure* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode timestamp */
	ret = asn1SccTime_Decode(&pVal->timestamp, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode pascals */
	    ret = asn1SccT_Double_Decode(&pVal->pascals, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccPressure_ACN_Encode(const asn1SccPressure* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPressure_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode timestamp */
	    ret = asn1SccTime_ACN_Encode(&pVal->timestamp, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode pascals */
	        ret = asn1SccT_Double_ACN_Encode(&pVal->pascals, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccPressure_ACN_Decode(asn1SccPressure* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode timestamp */
    ret = asn1SccTime_ACN_Decode(&pVal->timestamp, pBitStrm, pErrCode);
    if (ret) {
        /*Decode pascals */
        ret = asn1SccT_Double_ACN_Decode(&pVal->pascals, pBitStrm, pErrCode);

    }


    return ret;
}

