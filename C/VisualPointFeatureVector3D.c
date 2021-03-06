/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "VisualPointFeatureVector3D.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccVisualPointFeature3D_descriptor_Initialize(asn1SccVisualPointFeature3D_descriptor* pVal)
{
    *pVal = (asn1SccVisualPointFeature3D_descriptor) {    .nCount = 0,    .arr = 
    {
        
    }
};
}
#endif

 
flag asn1SccVisualPointFeature3D_descriptor_IsConstraintValid(const asn1SccVisualPointFeature3D_descriptor* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (0 <= pVal->nCount && pVal->nCount <= descriptor3DNameLength);
	*pErrCode = ret ? 0 : ERR_asn1SccVisualPointFeature3D_descriptor;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccT_Float_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccVisualPointFeature3D_descriptor_Encode(const asn1SccVisualPointFeature3D_descriptor* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccVisualPointFeature3D_descriptor_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 352);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Float_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeature3D_descriptor_Decode(asn1SccVisualPointFeature3D_descriptor* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 352);
	*pErrCode = ret ? 0 : 279707649;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccT_Float_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccVisualPointFeature3D_descriptor_ACN_Encode(const asn1SccVisualPointFeature3D_descriptor* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccVisualPointFeature3D_descriptor_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 352);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Float_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeature3D_descriptor_ACN_Decode(asn1SccVisualPointFeature3D_descriptor* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 352);
    *pErrCode = ret ? 0 : 279707650;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccT_Float_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPoint3DReference_Initialize(asn1SccPoint3DReference* pVal)
{
    *pVal = (asn1SccPoint3DReference) {
    .pointCloudIdentifier = 0,
    .index = 0
};
}
#endif

 
flag asn1SccPoint3DReference_IsConstraintValid(const asn1SccPoint3DReference* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_UInt16_IsConstraintValid(&pVal->pointCloudIdentifier, pErrCode);
	if (ret) {
	    ret = asn1SccT_UInt64_IsConstraintValid(&pVal->index, pErrCode);
	
	}

	return ret;
}

flag asn1SccPoint3DReference_Encode(const asn1SccPoint3DReference* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPoint3DReference_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode pointCloudIdentifier */
	    ret = asn1SccT_UInt16_Encode(&pVal->pointCloudIdentifier, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode index */
	        ret = asn1SccT_UInt64_Encode(&pVal->index, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccPoint3DReference_Decode(asn1SccPoint3DReference* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode pointCloudIdentifier */
	ret = asn1SccT_UInt16_Decode(&pVal->pointCloudIdentifier, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode index */
	    ret = asn1SccT_UInt64_Decode(&pVal->index, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccPoint3DReference_ACN_Encode(const asn1SccPoint3DReference* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPoint3DReference_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode pointCloudIdentifier */
	    ret = asn1SccT_UInt16_ACN_Encode(&pVal->pointCloudIdentifier, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode index */
	        ret = asn1SccT_UInt64_ACN_Encode(&pVal->index, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccPoint3DReference_ACN_Decode(asn1SccPoint3DReference* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode pointCloudIdentifier */
    ret = asn1SccT_UInt16_ACN_Decode(&pVal->pointCloudIdentifier, pBitStrm, pErrCode);
    if (ret) {
        /*Decode index */
        ret = asn1SccT_UInt64_ACN_Decode(&pVal->index, pBitStrm, pErrCode);

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccVisualPointFeature3D_point_Initialize(asn1SccVisualPointFeature3D_point* pVal)
{
    *pVal = (asn1SccVisualPointFeature3D_point) {
    .kind = position_PRESENT,
    .u = { .position = {    .arr = 
    {
        0.00000000000000000000E+000        
    }
}}
};
}
#endif

 
flag asn1SccVisualPointFeature3D_point_IsConstraintValid(const asn1SccVisualPointFeature3D_point* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	switch (pVal->kind) {
	    case position_PRESENT :
	        ret = asn1SccPoint3D_IsConstraintValid(&pVal->u.position, pErrCode);
	        break;
	    case reference_PRESENT :
	        ret = asn1SccPoint3DReference_IsConstraintValid(&pVal->u.reference, pErrCode);
	        break;
	    default:
		    *pErrCode = 816578561;   //COVERAGE_IGNORE
		    ret = FALSE;                    //COVERAGE_IGNORE
	}

	return ret;
}

flag asn1SccVisualPointFeature3D_point_Encode(const asn1SccVisualPointFeature3D_point* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccVisualPointFeature3D_point_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(pVal->kind) 
	    {
	    case position_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	    	ret = asn1SccPoint3D_Encode(&pVal->u.position, pBitStrm, pErrCode, FALSE);
	    	break;
	    case reference_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	    	ret = asn1SccPoint3DReference_Encode(&pVal->u.reference, pBitStrm, pErrCode, FALSE);
	    	break;
	    default:
	        *pErrCode = 816578562;         //COVERAGE_IGNORE
	        ret = FALSE;                    //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeature3D_point_Decode(asn1SccVisualPointFeature3D_point* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nChoiceIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nChoiceIndex, 0, 1);
	*pErrCode = ret ? 0 : 279707651;
	if (ret) {
	    switch(nChoiceIndex) 
	    {
	    case 0:
	    	pVal->kind = position_PRESENT;
	    	ret = asn1SccPoint3D_Decode(&pVal->u.position, pBitStrm, pErrCode);
	    	break;
	    case 1:
	    	pVal->kind = reference_PRESENT;
	    	ret = asn1SccPoint3DReference_Decode(&pVal->u.reference, pBitStrm, pErrCode);
	    	break;
	    default:
	        *pErrCode = 816578563;     //COVERAGE_IGNORE
	        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccVisualPointFeature3D_point_ACN_Encode(const asn1SccVisualPointFeature3D_point* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccVisualPointFeature3D_point_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(pVal->kind) 
	    {
	    case position_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 1);
	    	ret = asn1SccPoint3D_ACN_Encode(&pVal->u.position, pBitStrm, pErrCode, FALSE);
	    	break;
	    case reference_PRESENT:
	    	BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 1);
	    	ret = asn1SccPoint3DReference_ACN_Encode(&pVal->u.reference, pBitStrm, pErrCode, FALSE);
	    	break;
	    default:
	        *pErrCode = 816578564;         //COVERAGE_IGNORE
	        ret = FALSE;                    //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeature3D_point_ACN_Decode(asn1SccVisualPointFeature3D_point* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccSint nChoiceIndex;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nChoiceIndex, 0, 1);
    *pErrCode = ret ? 0 : 279707652;
    if (ret) {
        switch(nChoiceIndex) 
        {
        case 0:
        	pVal->kind = position_PRESENT;
        	ret = asn1SccPoint3D_ACN_Decode(&pVal->u.position, pBitStrm, pErrCode);
        	break;
        case 1:
        	pVal->kind = reference_PRESENT;
        	ret = asn1SccPoint3DReference_ACN_Decode(&pVal->u.reference, pBitStrm, pErrCode);
        	break;
        default:
            *pErrCode = 816578565;     //COVERAGE_IGNORE
            ret = FALSE;                //COVERAGE_IGNORE
        }
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccVisualPointFeature3D_Initialize(asn1SccVisualPointFeature3D* pVal)
{
    *pVal = (asn1SccVisualPointFeature3D) {
    .point = {
        .kind = position_PRESENT,
        .u = { .position = {    .arr = 
        {
            0.00000000000000000000E+000        
        }
    }}
    },
    .descriptor = {    .nCount = 0,    .arr = 
        {
            
        }
    }
};
}
#endif

 
flag asn1SccVisualPointFeature3D_IsConstraintValid(const asn1SccVisualPointFeature3D* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccVisualPointFeature3D_point_IsConstraintValid(&pVal->point, pErrCode);
	if (ret) {
	    ret = asn1SccVisualPointFeature3D_descriptor_IsConstraintValid(&pVal->descriptor, pErrCode);
	
	}

	return ret;
}

flag asn1SccVisualPointFeature3D_Encode(const asn1SccVisualPointFeature3D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccVisualPointFeature3D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode point */
	    ret = asn1SccVisualPointFeature3D_point_Encode(&pVal->point, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode descriptor */
	        ret = asn1SccVisualPointFeature3D_descriptor_Encode(&pVal->descriptor, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeature3D_Decode(asn1SccVisualPointFeature3D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode point */
	ret = asn1SccVisualPointFeature3D_point_Decode(&pVal->point, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode descriptor */
	    ret = asn1SccVisualPointFeature3D_descriptor_Decode(&pVal->descriptor, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccVisualPointFeature3D_ACN_Encode(const asn1SccVisualPointFeature3D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccVisualPointFeature3D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode point */
	    ret = asn1SccVisualPointFeature3D_point_ACN_Encode(&pVal->point, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode descriptor */
	        ret = asn1SccVisualPointFeature3D_descriptor_ACN_Encode(&pVal->descriptor, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccVisualPointFeature3D_ACN_Decode(asn1SccVisualPointFeature3D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode point */
    ret = asn1SccVisualPointFeature3D_point_ACN_Decode(&pVal->point, pBitStrm, pErrCode);
    if (ret) {
        /*Decode descriptor */
        ret = asn1SccVisualPointFeature3D_descriptor_ACN_Decode(&pVal->descriptor, pBitStrm, pErrCode);

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccVisualPointFeatureVector3D_list_Initialize(asn1SccVisualPointFeatureVector3D_list* pVal)
{
    *pVal = (asn1SccVisualPointFeatureVector3D_list) {    .nCount = 0,    .arr = 
    {
        
    }
};
}
#endif

 
flag asn1SccVisualPointFeatureVector3D_list_IsConstraintValid(const asn1SccVisualPointFeatureVector3D_list* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (0 <= pVal->nCount && pVal->nCount <= features3DElementsMax);
	*pErrCode = ret ? 0 : ERR_asn1SccVisualPointFeatureVector3D_list;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccVisualPointFeature3D_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_list_Encode(const asn1SccVisualPointFeatureVector3D_list* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccVisualPointFeatureVector3D_list_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 51200);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccVisualPointFeature3D_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_list_Decode(asn1SccVisualPointFeatureVector3D_list* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 51200);
	*pErrCode = ret ? 0 : 279707653;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccVisualPointFeature3D_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_list_ACN_Encode(const asn1SccVisualPointFeatureVector3D_list* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccVisualPointFeatureVector3D_list_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 51200);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccVisualPointFeature3D_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_list_ACN_Decode(asn1SccVisualPointFeatureVector3D_list* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 51200);
    *pErrCode = ret ? 0 : 279707654;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccVisualPointFeature3D_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccVisualPointFeatureVector3DType_Initialize(asn1SccVisualPointFeatureVector3DType* pVal)
{
    *pVal = (asn1SccVisualPointFeatureVector3DType) asn1Sccall_positions;
}
#endif

 
flag asn1SccVisualPointFeatureVector3DType_IsConstraintValid(const asn1SccVisualPointFeatureVector3DType* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = (((*pVal == asn1Sccall_positions) || (*pVal == asn1Sccall_references)) || (*pVal == asn1Scchybrid_vector));
	*pErrCode = ret ? 0 : ERR_asn1SccVisualPointFeatureVector3DType;

	return ret;
}

flag asn1SccVisualPointFeatureVector3DType_Encode(const asn1SccVisualPointFeatureVector3DType* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccVisualPointFeatureVector3DType_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) 
	    {
	        case asn1Sccall_positions:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 0, 0, 2);
	        	break;
	        case asn1Sccall_references:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 1, 0, 2);
	        	break;
	        case asn1Scchybrid_vector:   
	            BitStream_EncodeConstraintWholeNumber(pBitStrm, 2, 0, 2);
	        	break;
	        default:
	    	    *pErrCode = 1085014017; //COVERAGE_IGNORE
	    	    ret = FALSE;            //COVERAGE_IGNORE
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeatureVector3DType_Decode(asn1SccVisualPointFeatureVector3DType* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint enumIndex;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &enumIndex, 0, 2);
	*pErrCode = ret ? 0 : 279707655;
	if (ret) {
	    switch(enumIndex) 
	    {
	        case 0: 
	            *pVal = asn1Sccall_positions;
	            break;
	        case 1: 
	            *pVal = asn1Sccall_references;
	            break;
	        case 2: 
	            *pVal = asn1Scchybrid_vector;
	            break;
	        default:
		        *pErrCode = 1085014018;     //COVERAGE_IGNORE
		        ret = FALSE;                //COVERAGE_IGNORE
	    }
	}

	return ret;
}

flag asn1SccVisualPointFeatureVector3DType_ACN_Encode(const asn1SccVisualPointFeatureVector3DType* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;

    ret = bCheckConstraints ? asn1SccVisualPointFeatureVector3DType_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    switch(*pVal) { 
	        case asn1Sccall_positions:
	            intVal = 0;
	            break;
	        case asn1Sccall_references:
	            intVal = 1;
	            break;
	        case asn1Scchybrid_vector:
	            intVal = 2;
	            break;
	        default:
	            ret = FALSE;                            //COVERAGE_IGNORE
	            *pErrCode = 1085014019;      //COVERAGE_IGNORE
	    }
	    BitStream_EncodeConstraintPosWholeNumber(pBitStrm, intVal, 0, 2);
    }

	return ret;
}

flag asn1SccVisualPointFeatureVector3DType_ACN_Decode(asn1SccVisualPointFeatureVector3DType* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    asn1SccUint intVal = 0;
    ret = BitStream_DecodeConstraintPosWholeNumber(pBitStrm, &intVal, 0, 2);
    *pErrCode = ret ? 0 : 279707656;
    if (ret) {
        switch (intVal) {
            case 0:
                *pVal = asn1Sccall_positions;
                break;
            case 1:
                *pVal = asn1Sccall_references;
                break;
            case 2:
                *pVal = asn1Scchybrid_vector;
                break;
        default:
            ret = FALSE;                            //COVERAGE_IGNORE
            *pErrCode = 1085014020;      //COVERAGE_IGNORE
        };
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccVisualPointFeatureVector3D_Initialize(asn1SccVisualPointFeatureVector3D* pVal)
{
    *pVal = (asn1SccVisualPointFeatureVector3D) {
    .list = {    .nCount = 0,    .arr = 
        {
            
        }
    },
    .list_type = asn1Sccall_positions
};
}
#endif

 
flag asn1SccVisualPointFeatureVector3D_IsConstraintValid(const asn1SccVisualPointFeatureVector3D* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccVisualPointFeatureVector3D_list_IsConstraintValid(&pVal->list, pErrCode);
	if (ret) {
	    ret = asn1SccVisualPointFeatureVector3DType_IsConstraintValid(&pVal->list_type, pErrCode);
	
	}

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_Encode(const asn1SccVisualPointFeatureVector3D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccVisualPointFeatureVector3D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode list */
	    ret = asn1SccVisualPointFeatureVector3D_list_Encode(&pVal->list, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode list_type */
	        ret = asn1SccVisualPointFeatureVector3DType_Encode(&pVal->list_type, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_Decode(asn1SccVisualPointFeatureVector3D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode list */
	ret = asn1SccVisualPointFeatureVector3D_list_Decode(&pVal->list, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode list_type */
	    ret = asn1SccVisualPointFeatureVector3DType_Decode(&pVal->list_type, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccVisualPointFeatureVector3D_ACN_Encode(const asn1SccVisualPointFeatureVector3D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccVisualPointFeatureVector3D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode list */
	    ret = asn1SccVisualPointFeatureVector3D_list_ACN_Encode(&pVal->list, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode list_type */
	        ret = asn1SccVisualPointFeatureVector3DType_ACN_Encode(&pVal->list_type, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccVisualPointFeatureVector3D_ACN_Decode(asn1SccVisualPointFeatureVector3D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode list */
    ret = asn1SccVisualPointFeatureVector3D_list_ACN_Decode(&pVal->list, pBitStrm, pErrCode);
    if (ret) {
        /*Decode list_type */
        ret = asn1SccVisualPointFeatureVector3DType_ACN_Decode(&pVal->list_type, pBitStrm, pErrCode);

    }


    return ret;
}

const asn1SccT_UInt32 features3DElementsMax = 51200;

const asn1SccT_UInt32 descriptor3DNameLength = 352;
