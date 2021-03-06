/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "CompressedFrame.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccCompressedFrame_image_Initialize(asn1SccCompressedFrame_image* pVal)
{
    *pVal = (asn1SccCompressedFrame_image) {    .nCount = 1,    .arr = 
    {
        0        
    }
};
}
#endif

 
flag asn1SccCompressedFrame_image_IsConstraintValid(const asn1SccCompressedFrame_image* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (1 <= pVal->nCount && pVal->nCount <= maxCompressedFrameImageSize);
	*pErrCode = ret ? 0 : ERR_asn1SccCompressedFrame_image;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccT_UInt8_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccCompressedFrame_image_Encode(const asn1SccCompressedFrame_image* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccCompressedFrame_image_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    {
	    	asn1SccSint nCount1 = pVal->nCount;
	    	asn1SccSint curBlockSize1 = 0;
	    	asn1SccSint curItem1 = 0;
	    	while (nCount1 >= 0x4000) 
	    	{
	    		if (nCount1 >= 0x10000)
	    		{
	    			curBlockSize1 = 0x10000;
	    			BitStream_EncodeConstraintWholeNumber(pBitStrm, 0xC4, 0, 0xFF); 
	    		}
	    		else if (nCount1 >= 0xC000)
	    		{
	    			curBlockSize1 = 0xC000;
	    			BitStream_EncodeConstraintWholeNumber(pBitStrm, 0xC3, 0, 0xFF); 
	    		}
	    		else if (nCount1 >= 0x8000)
	    		{
	    			curBlockSize1 = 0x8000;
	    			BitStream_EncodeConstraintWholeNumber(pBitStrm, 0xC2, 0, 0xFF); 
	    		}
	    		else 
	    		{
	    			curBlockSize1 = 0x4000;
	    			BitStream_EncodeConstraintWholeNumber(pBitStrm, 0xC1, 0, 0xFF); 
	    		}
	    	
	    		for(i1=(int)curItem1; i1 < curBlockSize1 + curItem1; i1++)
	    		{
	    			ret = asn1SccT_UInt8_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    		}
	    		curItem1 += curBlockSize1;
	    		nCount1 -= curBlockSize1;
	    	}
	    
	    	if (nCount1 <= 0x7F)
	    		BitStream_EncodeConstraintWholeNumber(pBitStrm, nCount1, 0, 0xFF);
	    	else
	    	{
	    		BitStream_AppendBit(pBitStrm, 1);
	    		BitStream_EncodeConstraintWholeNumber(pBitStrm, nCount1, 0, 0x7FFF);
	    	}
	    
	    	for(i1=(int)curItem1; i1 < curItem1 + nCount1; i1++)
	    	{
	    		ret = asn1SccT_UInt8_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    	}
	    }
    }

	return ret;
}

flag asn1SccCompressedFrame_image_Decode(asn1SccCompressedFrame_image* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	int i1=0;

	{
		asn1SccSint nCount1 = 0;
		asn1SccSint curBlockSize1 = 0;
		asn1SccSint curItem1 = 0;
	    pVal->nCount = 0;
		ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount1, 0, 0xFF);
	    *pErrCode = ret ? 0 : 276037633;
	    if (ret) {
		    while(ret && (nCount1 & 0xC0)==0xC0) 
		    {
			    if (nCount1 == 0xC4)
				    curBlockSize1 = 0x10000;
			    else if (nCount1 == 0xC3)
				    curBlockSize1 = 0xC000;
			    else if (nCount1 == 0xC2)
				    curBlockSize1 = 0x8000;
			    else if (nCount1 == 0xC1)
				    curBlockSize1 = 0x4000;
			    else {
				    *pErrCode = 544473089;
				    return FALSE;
			    }
			    if (curItem1 + curBlockSize1 > 262144)
			    {
				    *pErrCode = 276037634;
				    return FALSE;
			    }
	
			    for(i1=curItem1; ret && (i1 < curItem1 + curBlockSize1) ; i1++)
			    {
				    ret = asn1SccT_UInt8_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
			    }
		
	            if (ret) {
			        pVal->nCount += (long)curBlockSize1;
			        curItem1 += curBlockSize1;
			        ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount1, 0, 0xFF);
	                *pErrCode = ret ? 0 : 276037635;
	            }
		    }
	        if (ret) {
		        if ( (nCount1 & 0x80)>0) 
		        {
			        asn1SccSint len2;
			        nCount1 <<= 8;
			        ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &len2, 0, 0xFF);
	                *pErrCode = ret ? 0 : 276037636;
	                if (ret) {
			            nCount1 |= len2;
			            nCount1 &= 0x7FFF;
	                }
		        }
	            ret = ret && (curItem1 + nCount1 <= 262144);
	            *pErrCode = ret ? 0 : 276037637;
	            if (ret) {
		            for(i1=curItem1; ret && (i1 < curItem1 + nCount1) ; i1++)
		            {
			            ret = asn1SccT_UInt8_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
		            }
	                if (ret) {
		                pVal->nCount += (long)nCount1;
	                }
	            }
	        }
	    }
	}

	return ret;
}

flag asn1SccCompressedFrame_image_ACN_Encode(const asn1SccCompressedFrame_image* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccCompressedFrame_image_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 262144);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_UInt8_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccCompressedFrame_image_ACN_Decode(asn1SccCompressedFrame_image* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 262144);
    *pErrCode = ret ? 0 : 276037638;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccT_UInt8_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccCompressedFrame_attributes_Initialize(asn1SccCompressedFrame_attributes* pVal)
{
    *pVal = (asn1SccCompressedFrame_attributes) {    .nCount = 1,    .arr = 
    {
        {
            .name = {0,
                {
                }
            },
            .data = {0,
                {
                }
            }
        }        
    }
};
}
#endif

 
flag asn1SccCompressedFrame_attributes_IsConstraintValid(const asn1SccCompressedFrame_attributes* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (1 <= pVal->nCount && pVal->nCount <= maxCompressedFrameImageAttributes);
	*pErrCode = ret ? 0 : ERR_asn1SccCompressedFrame_attributes;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccFrame_attrib_t_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccCompressedFrame_attributes_Encode(const asn1SccCompressedFrame_attributes* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccCompressedFrame_attributes_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 10);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccFrame_attrib_t_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccCompressedFrame_attributes_Decode(asn1SccCompressedFrame_attributes* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 10);
	*pErrCode = ret ? 0 : 276037639;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccFrame_attrib_t_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccCompressedFrame_attributes_ACN_Encode(const asn1SccCompressedFrame_attributes* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccCompressedFrame_attributes_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 10);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccFrame_attrib_t_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccCompressedFrame_attributes_ACN_Decode(asn1SccCompressedFrame_attributes* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 10);
    *pErrCode = ret ? 0 : 276037640;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccFrame_attrib_t_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccFrame_compressed_mode_t_Initialize(asn1SccFrame_compressed_mode_t* pVal)
{
    *pVal = (asn1SccFrame_compressed_mode_t) asn1Sccmode_compressed_undefined;
}
#endif

 
flag asn1SccFrame_compressed_mode_t_IsConstraintValid(const asn1SccFrame_compressed_mode_t* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = ((*pVal == asn1Sccmode_compressed_undefined) || (*pVal == asn1SccFrame_compressed_mode_t_mode_pjpg));
	*pErrCode = ret ? 0 : ERR_asn1SccFrame_compressed_mode_t;

	return ret;
}

flag asn1SccFrame_compressed_mode_t_Encode(const asn1SccFrame_compressed_mode_t* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccFrame_compressed_mode_t_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) 
	    {
	        case asn1Sccmode_compressed_undefined:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	        	break;
	        case asn1SccFrame_compressed_mode_t_mode_pjpg:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	        	break;
	        default:
	    	    *pErrCode = 1081344001; //COVERAGE_IGNORE
	    	    ret = FALSE;            //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccFrame_compressed_mode_t_Decode(asn1SccFrame_compressed_mode_t* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint enumIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &enumIndex, 0, 1);
	*pErrCode = ret ? 0 : 276037641;
	if (ret) {
	    switch(enumIndex) 
	    {
	        case 0: 
	            *pVal = asn1Sccmode_compressed_undefined;
	            break;
	        case 1: 
	            *pVal = asn1SccFrame_compressed_mode_t_mode_pjpg;
	            break;
	        default:
		        *pErrCode = 1081344002;     //COVERAGE_IGNORE
		        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccFrame_compressed_mode_t_ACN_Encode(const asn1SccFrame_compressed_mode_t* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;

    ret = bCheckConstraints ? asn1SccFrame_compressed_mode_t_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) { 
	        case asn1Sccmode_compressed_undefined:
	            intVal = 0;
	            break;
	        case asn1SccFrame_compressed_mode_t_mode_pjpg:
	            intVal = 1;
	            break;
	        default:
	            ret = FALSE;                            //COVERAGE_IGNORE
	            *pErrCode = 1081344003;      //COVERAGE_IGNORE
	    }
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, intVal, 0, 1);
    }

	return ret;
}

flag asn1SccFrame_compressed_mode_t_ACN_Decode(asn1SccFrame_compressed_mode_t* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, &intVal, 0, 1);
    *pErrCode = ret ? 0 : 276037642;
    if (ret) {
        switch (intVal) {
            case 0:
                *pVal = asn1Sccmode_compressed_undefined;
                break;
            case 1:
                *pVal = asn1SccFrame_compressed_mode_t_mode_pjpg;
                break;
        default:
            ret = FALSE;                            //COVERAGE_IGNORE
            *pErrCode = 1081344004;      //COVERAGE_IGNORE
        };
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccCompressedFrame_Initialize(asn1SccCompressedFrame* pVal)
{
    *pVal = (asn1SccCompressedFrame) {
    .ref_time = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .received_time = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .image = {    .nCount = 1,    .arr = 
        {
            0        
        }
    },
    .attributes = {    .nCount = 1,    .arr = 
        {
            {
                .name = {0,
                    {
                    }
                },
                .data = {0,
                    {
                    }
                }
            }        
        }
    },
    .rows = 0,
    .cols = 0,
    .frame_mode = asn1Sccmode_compressed_undefined,
    .frame_status = asn1Sccstatus_EMPTY
};
}
#endif

 
flag asn1SccCompressedFrame_IsConstraintValid(const asn1SccCompressedFrame* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccTime_IsConstraintValid(&pVal->ref_time, pErrCode);
	if (ret) {
	    ret = asn1SccTime_IsConstraintValid(&pVal->received_time, pErrCode);
	    if (ret) {
	        ret = asn1SccCompressedFrame_image_IsConstraintValid(&pVal->image, pErrCode);
	        if (ret) {
	            ret = asn1SccCompressedFrame_attributes_IsConstraintValid(&pVal->attributes, pErrCode);
	            if (ret) {
	                ret = asn1SccT_UInt32_IsConstraintValid(&pVal->rows, pErrCode);
	                if (ret) {
	                    ret = asn1SccT_UInt32_IsConstraintValid(&pVal->cols, pErrCode);
	                    if (ret) {
	                        ret = asn1SccFrame_compressed_mode_t_IsConstraintValid(&pVal->frame_mode, pErrCode);
	                        if (ret) {
	                            ret = asn1SccFrame_status_t_IsConstraintValid(&pVal->frame_status, pErrCode);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
	}

	return ret;
}

flag asn1SccCompressedFrame_Encode(const asn1SccCompressedFrame* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccCompressedFrame_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode ref_time */
	    ret = asn1SccTime_Encode(&pVal->ref_time, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode received_time */
	        ret = asn1SccTime_Encode(&pVal->received_time, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode image */
	            ret = asn1SccCompressedFrame_image_Encode(&pVal->image, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode attributes */
	                ret = asn1SccCompressedFrame_attributes_Encode(&pVal->attributes, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode rows */
	                    ret = asn1SccT_UInt32_Encode(&pVal->rows, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode cols */
	                        ret = asn1SccT_UInt32_Encode(&pVal->cols, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode frame_mode */
	                            ret = asn1SccFrame_compressed_mode_t_Encode(&pVal->frame_mode, pBitStrm, pErrCode, FALSE);
	                            if (ret) {
	                                /*Encode frame_status */
	                                ret = asn1SccFrame_status_t_Encode(&pVal->frame_status, pBitStrm, pErrCode, FALSE);
	                            
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

flag asn1SccCompressedFrame_Decode(asn1SccCompressedFrame* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode ref_time */
	ret = asn1SccTime_Decode(&pVal->ref_time, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode received_time */
	    ret = asn1SccTime_Decode(&pVal->received_time, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode image */
	        ret = asn1SccCompressedFrame_image_Decode(&pVal->image, pBitStrm, pErrCode);
	        if (ret) {
	            /*Decode attributes */
	            ret = asn1SccCompressedFrame_attributes_Decode(&pVal->attributes, pBitStrm, pErrCode);
	            if (ret) {
	                /*Decode rows */
	                ret = asn1SccT_UInt32_Decode(&pVal->rows, pBitStrm, pErrCode);
	                if (ret) {
	                    /*Decode cols */
	                    ret = asn1SccT_UInt32_Decode(&pVal->cols, pBitStrm, pErrCode);
	                    if (ret) {
	                        /*Decode frame_mode */
	                        ret = asn1SccFrame_compressed_mode_t_Decode(&pVal->frame_mode, pBitStrm, pErrCode);
	                        if (ret) {
	                            /*Decode frame_status */
	                            ret = asn1SccFrame_status_t_Decode(&pVal->frame_status, pBitStrm, pErrCode);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
	}


	return ret;
}

flag asn1SccCompressedFrame_ACN_Encode(const asn1SccCompressedFrame* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccCompressedFrame_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode ref_time */
	    ret = asn1SccTime_ACN_Encode(&pVal->ref_time, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode received_time */
	        ret = asn1SccTime_ACN_Encode(&pVal->received_time, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode image */
	            ret = asn1SccCompressedFrame_image_ACN_Encode(&pVal->image, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode attributes */
	                ret = asn1SccCompressedFrame_attributes_ACN_Encode(&pVal->attributes, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode rows */
	                    ret = asn1SccT_UInt32_ACN_Encode(&pVal->rows, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode cols */
	                        ret = asn1SccT_UInt32_ACN_Encode(&pVal->cols, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode frame_mode */
	                            ret = asn1SccFrame_compressed_mode_t_ACN_Encode(&pVal->frame_mode, pBitStrm, pErrCode, FALSE);
	                            if (ret) {
	                                /*Encode frame_status */
	                                ret = asn1SccFrame_status_t_ACN_Encode(&pVal->frame_status, pBitStrm, pErrCode, FALSE);

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

flag asn1SccCompressedFrame_ACN_Decode(asn1SccCompressedFrame* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode ref_time */
    ret = asn1SccTime_ACN_Decode(&pVal->ref_time, pBitStrm, pErrCode);
    if (ret) {
        /*Decode received_time */
        ret = asn1SccTime_ACN_Decode(&pVal->received_time, pBitStrm, pErrCode);
        if (ret) {
            /*Decode image */
            ret = asn1SccCompressedFrame_image_ACN_Decode(&pVal->image, pBitStrm, pErrCode);
            if (ret) {
                /*Decode attributes */
                ret = asn1SccCompressedFrame_attributes_ACN_Decode(&pVal->attributes, pBitStrm, pErrCode);
                if (ret) {
                    /*Decode rows */
                    ret = asn1SccT_UInt32_ACN_Decode(&pVal->rows, pBitStrm, pErrCode);
                    if (ret) {
                        /*Decode cols */
                        ret = asn1SccT_UInt32_ACN_Decode(&pVal->cols, pBitStrm, pErrCode);
                        if (ret) {
                            /*Decode frame_mode */
                            ret = asn1SccFrame_compressed_mode_t_ACN_Decode(&pVal->frame_mode, pBitStrm, pErrCode);
                            if (ret) {
                                /*Decode frame_status */
                                ret = asn1SccFrame_status_t_ACN_Decode(&pVal->frame_status, pBitStrm, pErrCode);

                            }

                        }

                    }

                }

            }

        }

    }


    return ret;
}

const asn1SccT_UInt32 maxCompressedFrameImageSize = 262144;

const asn1SccT_UInt32 maxCompressedFrameImageAttributes = 10;
