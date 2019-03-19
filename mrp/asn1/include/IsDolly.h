//************************************************************************************************************
//
// © 2016-2019 Regents of the University of California on behalf of the University of California at Berkeley
//       with rights granted for USDOT OSADP distribution with the ECL-2.0 open source license.
//
//*************************************************************************************************************
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../j2735_asn/J2735_201603DA.asn"
 * 	`asn1c -fcompound-names -gen-PER -gen-OER -pdu=auto`
 */

#ifndef	_IsDolly_H_
#define	_IsDolly_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IsDolly */
typedef BOOLEAN_t	 IsDolly_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IsDolly;
asn_struct_free_f IsDolly_free;
asn_struct_print_f IsDolly_print;
asn_constr_check_f IsDolly_constraint;
ber_type_decoder_f IsDolly_decode_ber;
der_type_encoder_f IsDolly_encode_der;
xer_type_decoder_f IsDolly_decode_xer;
xer_type_encoder_f IsDolly_encode_xer;
oer_type_decoder_f IsDolly_decode_oer;
oer_type_encoder_f IsDolly_encode_oer;
per_type_decoder_f IsDolly_decode_uper;
per_type_encoder_f IsDolly_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IsDolly_H_ */
#include <asn_internal.h>
