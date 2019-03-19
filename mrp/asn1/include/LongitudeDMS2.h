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

#ifndef	_LongitudeDMS2_H_
#define	_LongitudeDMS2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DegreesLong.h"
#include "MinutesAngle.h"
#include "SecondsAngle.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LongitudeDMS2 */
typedef struct LongitudeDMS2 {
	DegreesLong_t	 d;
	MinutesAngle_t	 m;
	SecondsAngle_t	 s;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LongitudeDMS2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LongitudeDMS2;
extern asn_SEQUENCE_specifics_t asn_SPC_LongitudeDMS2_specs_1;
extern asn_TYPE_member_t asn_MBR_LongitudeDMS2_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LongitudeDMS2_H_ */
#include <asn_internal.h>
