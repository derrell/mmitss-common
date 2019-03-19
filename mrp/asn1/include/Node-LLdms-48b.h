//************************************************************************************************************
//
// © 2016-2019 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*************************************************************************************************************
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "../j2735_asn/J2735_201603DA.asn"
 * 	`asn1c -fcompound-names -gen-PER -gen-OER -pdu=auto`
 */

#ifndef	_Node_LLdms_48b_H_
#define	_Node_LLdms_48b_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LongitudeDMS.h"
#include "LatitudeDMS.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Node-LLdms-48b */
typedef struct Node_LLdms_48b {
	LongitudeDMS_t	 lon;
	LatitudeDMS_t	 lat;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Node_LLdms_48b_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Node_LLdms_48b;
extern asn_SEQUENCE_specifics_t asn_SPC_Node_LLdms_48b_specs_1;
extern asn_TYPE_member_t asn_MBR_Node_LLdms_48b_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Node_LLdms_48b_H_ */
#include <asn_internal.h>
