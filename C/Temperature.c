/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Temperature.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTemperature_Initialize(asn1SccTemperature* pVal)
{
    *pVal = (asn1SccTemperature) {
    .kelvin = 0.00000000000000000000E+000
};
}
#endif

 
flag asn1SccTemperature_IsConstraintValid(const asn1SccTemperature* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_Double_IsConstraintValid(&pVal->kelvin, pErrCode);


	return ret;
}

flag asn1SccTemperature_Encode(const asn1SccTemperature* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccTemperature_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode kelvin */
	    ret = asn1SccT_Double_Encode(&pVal->kelvin, pBitStrm, pErrCode, FALSE);

    }

	return ret;
}

flag asn1SccTemperature_Decode(asn1SccTemperature* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode kelvin */
	ret = asn1SccT_Double_Decode(&pVal->kelvin, pBitStrm, pErrCode);
	


	return ret;
}

flag asn1SccTemperature_ACN_Encode(const asn1SccTemperature* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccTemperature_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode kelvin */
	    ret = asn1SccT_Double_ACN_Encode(&pVal->kelvin, pBitStrm, pErrCode, FALSE);

    }

	return ret;
}

flag asn1SccTemperature_ACN_Decode(asn1SccTemperature* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode kelvin */
    ret = asn1SccT_Double_ACN_Decode(&pVal->kelvin, pBitStrm, pErrCode);


    return ret;
}
