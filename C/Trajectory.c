/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Trajectory.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTrajectory_points_Initialize(asn1SccTrajectory_points* pVal)
{
    *pVal = (asn1SccTrajectory_points) {    .nCount = 1,    .arr = 
    {
        {    .arr = 
            {
                0.00000000000000000000E+000        
            }
        }        
    }
};
}
#endif

 
flag asn1SccTrajectory_points_IsConstraintValid(const asn1SccTrajectory_points* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (1 <= pVal->nCount && pVal->nCount <= maxTrajectoryPoints);
	*pErrCode = ret ? 0 : ERR_asn1SccTrajectory_points;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccPoint_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccTrajectory_points_Encode(const asn1SccTrajectory_points* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccTrajectory_points_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 50);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccPoint_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccTrajectory_points_Decode(asn1SccTrajectory_points* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 50);
	*pErrCode = ret ? 0 : 270008321;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccPoint_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccTrajectory_points_ACN_Encode(const asn1SccTrajectory_points* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccTrajectory_points_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 50);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccPoint_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccTrajectory_points_ACN_Decode(asn1SccTrajectory_points* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 50);
    *pErrCode = ret ? 0 : 270008322;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccPoint_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTrajectory_Initialize(asn1SccTrajectory* pVal)
{
    *pVal = (asn1SccTrajectory) {
    .speed = 0.00000000000000000000E+000,
    .points = {    .nCount = 1,    .arr = 
        {
            {    .arr = 
                {
                    0.00000000000000000000E+000        
                }
            }        
        }
    }
};
}
#endif

 
flag asn1SccTrajectory_IsConstraintValid(const asn1SccTrajectory* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_Double_IsConstraintValid(&pVal->speed, pErrCode);
	if (ret) {
	    ret = asn1SccTrajectory_points_IsConstraintValid(&pVal->points, pErrCode);
	
	}

	return ret;
}

flag asn1SccTrajectory_Encode(const asn1SccTrajectory* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccTrajectory_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode speed */
	    ret = asn1SccT_Double_Encode(&pVal->speed, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode points */
	        ret = asn1SccTrajectory_points_Encode(&pVal->points, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccTrajectory_Decode(asn1SccTrajectory* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode speed */
	ret = asn1SccT_Double_Decode(&pVal->speed, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode points */
	    ret = asn1SccTrajectory_points_Decode(&pVal->points, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccTrajectory_ACN_Encode(const asn1SccTrajectory* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccTrajectory_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode speed */
	    ret = asn1SccT_Double_ACN_Encode(&pVal->speed, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode points */
	        ret = asn1SccTrajectory_points_ACN_Encode(&pVal->points, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccTrajectory_ACN_Decode(asn1SccTrajectory* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode speed */
    ret = asn1SccT_Double_ACN_Decode(&pVal->speed, pBitStrm, pErrCode);
    if (ret) {
        /*Decode points */
        ret = asn1SccTrajectory_points_ACN_Decode(&pVal->points, pBitStrm, pErrCode);

    }


    return ret;
}

const asn1SccT_UInt32 maxTrajectoryPoints = 50;
