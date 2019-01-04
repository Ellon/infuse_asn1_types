/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "LaserScan.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccLaserScan_ranges_Initialize(asn1SccLaserScan_ranges* pVal)
{
    *pVal = (asn1SccLaserScan_ranges) {    .nCount = 1,    .arr = 
    {
        -2147483648LL        
    }
};
}
#endif

 
flag asn1SccLaserScan_ranges_IsConstraintValid(const asn1SccLaserScan_ranges* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (1 <= pVal->nCount && pVal->nCount <= maxLaserScanSize);
	*pErrCode = ret ? 0 : ERR_asn1SccLaserScan_ranges;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccT_Int32_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccLaserScan_ranges_Encode(const asn1SccLaserScan_ranges* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccLaserScan_ranges_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 2000);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Int32_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccLaserScan_ranges_Decode(asn1SccLaserScan_ranges* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 2000);
	*pErrCode = ret ? 0 : 277610497;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccT_Int32_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccLaserScan_ranges_ACN_Encode(const asn1SccLaserScan_ranges* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccLaserScan_ranges_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 2000);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Int32_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccLaserScan_ranges_ACN_Decode(asn1SccLaserScan_ranges* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 2000);
    *pErrCode = ret ? 0 : 277610498;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccT_Int32_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccLaserScan_remission_Initialize(asn1SccLaserScan_remission* pVal)
{
    *pVal = (asn1SccLaserScan_remission) {    .nCount = 1,    .arr = 
    {
        0.00000000000000000000E+000        
    }
};
}
#endif

 
flag asn1SccLaserScan_remission_IsConstraintValid(const asn1SccLaserScan_remission* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (1 <= pVal->nCount && pVal->nCount <= maxLaserScanSize);
	*pErrCode = ret ? 0 : ERR_asn1SccLaserScan_remission;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccT_Float_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccLaserScan_remission_Encode(const asn1SccLaserScan_remission* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccLaserScan_remission_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 2000);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Float_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccLaserScan_remission_Decode(asn1SccLaserScan_remission* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 2000);
	*pErrCode = ret ? 0 : 277610499;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccT_Float_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccLaserScan_remission_ACN_Encode(const asn1SccLaserScan_remission* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccLaserScan_remission_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 2000);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Float_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccLaserScan_remission_ACN_Decode(asn1SccLaserScan_remission* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 2000);
    *pErrCode = ret ? 0 : 277610500;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccT_Float_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccLaserScan_Initialize(asn1SccLaserScan* pVal)
{
    *pVal = (asn1SccLaserScan) {
    .ref_time = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .start_angle = 0.00000000000000000000E+000,
    .angular_resolution = 0.00000000000000000000E+000,
    .speed = 0.00000000000000000000E+000,
    .ranges = {    .nCount = 1,    .arr = 
        {
            -2147483648LL        
        }
    },
    .minRange = 0,
    .maxRange = 0,
    .remission = {    .nCount = 1,    .arr = 
        {
            0.00000000000000000000E+000        
        }
    }
};
}
#endif

 
flag asn1SccLaserScan_IsConstraintValid(const asn1SccLaserScan* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccTime_IsConstraintValid(&pVal->ref_time, pErrCode);
	if (ret) {
	    ret = asn1SccT_Double_IsConstraintValid(&pVal->start_angle, pErrCode);
	    if (ret) {
	        ret = asn1SccT_Double_IsConstraintValid(&pVal->angular_resolution, pErrCode);
	        if (ret) {
	            ret = asn1SccT_Double_IsConstraintValid(&pVal->speed, pErrCode);
	            if (ret) {
	                ret = asn1SccLaserScan_ranges_IsConstraintValid(&pVal->ranges, pErrCode);
	                if (ret) {
	                    ret = asn1SccT_UInt32_IsConstraintValid(&pVal->minRange, pErrCode);
	                    if (ret) {
	                        ret = asn1SccT_UInt32_IsConstraintValid(&pVal->maxRange, pErrCode);
	                        if (ret) {
	                            ret = asn1SccLaserScan_remission_IsConstraintValid(&pVal->remission, pErrCode);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
	}

	return ret;
}

flag asn1SccLaserScan_Encode(const asn1SccLaserScan* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccLaserScan_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode ref_time */
	    ret = asn1SccTime_Encode(&pVal->ref_time, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode start_angle */
	        ret = asn1SccT_Double_Encode(&pVal->start_angle, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode angular_resolution */
	            ret = asn1SccT_Double_Encode(&pVal->angular_resolution, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode speed */
	                ret = asn1SccT_Double_Encode(&pVal->speed, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode ranges */
	                    ret = asn1SccLaserScan_ranges_Encode(&pVal->ranges, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode minRange */
	                        ret = asn1SccT_UInt32_Encode(&pVal->minRange, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode maxRange */
	                            ret = asn1SccT_UInt32_Encode(&pVal->maxRange, pBitStrm, pErrCode, FALSE);
	                            if (ret) {
	                                /*Encode remission */
	                                ret = asn1SccLaserScan_remission_Encode(&pVal->remission, pBitStrm, pErrCode, FALSE);
	                            
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
    }

	return ret;
}

flag asn1SccLaserScan_Decode(asn1SccLaserScan* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode ref_time */
	ret = asn1SccTime_Decode(&pVal->ref_time, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode start_angle */
	    ret = asn1SccT_Double_Decode(&pVal->start_angle, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode angular_resolution */
	        ret = asn1SccT_Double_Decode(&pVal->angular_resolution, pBitStrm, pErrCode);
	        if (ret) {
	            /*Decode speed */
	            ret = asn1SccT_Double_Decode(&pVal->speed, pBitStrm, pErrCode);
	            if (ret) {
	                /*Decode ranges */
	                ret = asn1SccLaserScan_ranges_Decode(&pVal->ranges, pBitStrm, pErrCode);
	                if (ret) {
	                    /*Decode minRange */
	                    ret = asn1SccT_UInt32_Decode(&pVal->minRange, pBitStrm, pErrCode);
	                    if (ret) {
	                        /*Decode maxRange */
	                        ret = asn1SccT_UInt32_Decode(&pVal->maxRange, pBitStrm, pErrCode);
	                        if (ret) {
	                            /*Decode remission */
	                            ret = asn1SccLaserScan_remission_Decode(&pVal->remission, pBitStrm, pErrCode);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
	}


	return ret;
}

flag asn1SccLaserScan_ACN_Encode(const asn1SccLaserScan* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccLaserScan_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode ref_time */
	    ret = asn1SccTime_ACN_Encode(&pVal->ref_time, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode start_angle */
	        ret = asn1SccT_Double_ACN_Encode(&pVal->start_angle, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode angular_resolution */
	            ret = asn1SccT_Double_ACN_Encode(&pVal->angular_resolution, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode speed */
	                ret = asn1SccT_Double_ACN_Encode(&pVal->speed, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode ranges */
	                    ret = asn1SccLaserScan_ranges_ACN_Encode(&pVal->ranges, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode minRange */
	                        ret = asn1SccT_UInt32_ACN_Encode(&pVal->minRange, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode maxRange */
	                            ret = asn1SccT_UInt32_ACN_Encode(&pVal->maxRange, pBitStrm, pErrCode, FALSE);
	                            if (ret) {
	                                /*Encode remission */
	                                ret = asn1SccLaserScan_remission_ACN_Encode(&pVal->remission, pBitStrm, pErrCode, FALSE);

	                            }

	                        }

	                    }

	                }

	            }

	        }

	    }

    }

	return ret;
}

flag asn1SccLaserScan_ACN_Decode(asn1SccLaserScan* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode ref_time */
    ret = asn1SccTime_ACN_Decode(&pVal->ref_time, pBitStrm, pErrCode);
    if (ret) {
        /*Decode start_angle */
        ret = asn1SccT_Double_ACN_Decode(&pVal->start_angle, pBitStrm, pErrCode);
        if (ret) {
            /*Decode angular_resolution */
            ret = asn1SccT_Double_ACN_Decode(&pVal->angular_resolution, pBitStrm, pErrCode);
            if (ret) {
                /*Decode speed */
                ret = asn1SccT_Double_ACN_Decode(&pVal->speed, pBitStrm, pErrCode);
                if (ret) {
                    /*Decode ranges */
                    ret = asn1SccLaserScan_ranges_ACN_Decode(&pVal->ranges, pBitStrm, pErrCode);
                    if (ret) {
                        /*Decode minRange */
                        ret = asn1SccT_UInt32_ACN_Decode(&pVal->minRange, pBitStrm, pErrCode);
                        if (ret) {
                            /*Decode maxRange */
                            ret = asn1SccT_UInt32_ACN_Decode(&pVal->maxRange, pBitStrm, pErrCode);
                            if (ret) {
                                /*Decode remission */
                                ret = asn1SccLaserScan_remission_ACN_Decode(&pVal->remission, pBitStrm, pErrCode);

                            }

                        }

                    }

                }

            }

        }

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccLASER_RANGE_ERRORS_Initialize(asn1SccLASER_RANGE_ERRORS* pVal)
{
    *pVal = (asn1SccLASER_RANGE_ERRORS) asn1SccLASER_RANGE_ERRORS_too_far;
}
#endif

 
flag asn1SccLASER_RANGE_ERRORS_IsConstraintValid(const asn1SccLASER_RANGE_ERRORS* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = ((((((*pVal == asn1SccLASER_RANGE_ERRORS_too_far) || (*pVal == asn1SccLASER_RANGE_ERRORS_too_near)) || (*pVal == asn1SccLASER_RANGE_ERRORS_measurement_error)) || (*pVal == asn1Sccother_range_errors)) || (*pVal == asn1Sccmax_range_error)) || (*pVal == asn1Sccend_laser_range_errors));
	*pErrCode = ret ? 0 : ERR_asn1SccLASER_RANGE_ERRORS;

	return ret;
}

flag asn1SccLASER_RANGE_ERRORS_Encode(const asn1SccLASER_RANGE_ERRORS* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccLASER_RANGE_ERRORS_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) 
	    {
	        case asn1SccLASER_RANGE_ERRORS_too_far:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 5);
	        	break;
	        case asn1SccLASER_RANGE_ERRORS_too_near:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 5);
	        	break;
	        case asn1SccLASER_RANGE_ERRORS_measurement_error:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 2, 0, 5);
	        	break;
	        case asn1Sccother_range_errors:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 3, 0, 5);
	        	break;
	        case asn1Sccmax_range_error:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 4, 0, 5);
	        	break;
	        case asn1Sccend_laser_range_errors:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 5, 0, 5);
	        	break;
	        default:
	    	    *pErrCode = 1082916865; //COVERAGE_IGNORE
	    	    ret = FALSE;            //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccLASER_RANGE_ERRORS_Decode(asn1SccLASER_RANGE_ERRORS* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint enumIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &enumIndex, 0, 5);
	*pErrCode = ret ? 0 : 277610501;
	if (ret) {
	    switch(enumIndex) 
	    {
	        case 0: 
	            *pVal = asn1SccLASER_RANGE_ERRORS_too_far;
	            break;
	        case 1: 
	            *pVal = asn1SccLASER_RANGE_ERRORS_too_near;
	            break;
	        case 2: 
	            *pVal = asn1SccLASER_RANGE_ERRORS_measurement_error;
	            break;
	        case 3: 
	            *pVal = asn1Sccother_range_errors;
	            break;
	        case 4: 
	            *pVal = asn1Sccmax_range_error;
	            break;
	        case 5: 
	            *pVal = asn1Sccend_laser_range_errors;
	            break;
	        default:
		        *pErrCode = 1082916866;     //COVERAGE_IGNORE
		        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccLASER_RANGE_ERRORS_ACN_Encode(const asn1SccLASER_RANGE_ERRORS* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;

    ret = bCheckConstraints ? asn1SccLASER_RANGE_ERRORS_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) { 
	        case asn1SccLASER_RANGE_ERRORS_too_far:
	            intVal = 0;
	            break;
	        case asn1SccLASER_RANGE_ERRORS_too_near:
	            intVal = 1;
	            break;
	        case asn1SccLASER_RANGE_ERRORS_measurement_error:
	            intVal = 2;
	            break;
	        case asn1Sccother_range_errors:
	            intVal = 3;
	            break;
	        case asn1Sccmax_range_error:
	            intVal = 4;
	            break;
	        case asn1Sccend_laser_range_errors:
	            intVal = 5;
	            break;
	        default:
	            ret = FALSE;                            //COVERAGE_IGNORE
	            *pErrCode = 1082916867;      //COVERAGE_IGNORE
	    }
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, intVal, 0, 5);
    }

	return ret;
}

flag asn1SccLASER_RANGE_ERRORS_ACN_Decode(asn1SccLASER_RANGE_ERRORS* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, &intVal, 0, 5);
    *pErrCode = ret ? 0 : 277610502;
    if (ret) {
        switch (intVal) {
            case 0:
                *pVal = asn1SccLASER_RANGE_ERRORS_too_far;
                break;
            case 1:
                *pVal = asn1SccLASER_RANGE_ERRORS_too_near;
                break;
            case 2:
                *pVal = asn1SccLASER_RANGE_ERRORS_measurement_error;
                break;
            case 3:
                *pVal = asn1Sccother_range_errors;
                break;
            case 4:
                *pVal = asn1Sccmax_range_error;
                break;
            case 5:
                *pVal = asn1Sccend_laser_range_errors;
                break;
        default:
            ret = FALSE;                            //COVERAGE_IGNORE
            *pErrCode = 1082916868;      //COVERAGE_IGNORE
        };
    }
    return ret;
}

const asn1SccT_UInt32 maxLaserScanSize = 2000;