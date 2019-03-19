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

#include "UniqueMSGID.h"

int
UniqueMSGID_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_UniqueMSGID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	9	/* (SIZE(9..9)) */};
asn_per_constraints_t asn_PER_type_UniqueMSGID_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  9,  9 }	/* (SIZE(9..9)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_UniqueMSGID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UniqueMSGID = {
	"UniqueMSGID",
	"UniqueMSGID",
	&asn_OP_OCTET_STRING,
	asn_DEF_UniqueMSGID_tags_1,
	sizeof(asn_DEF_UniqueMSGID_tags_1)
		/sizeof(asn_DEF_UniqueMSGID_tags_1[0]), /* 1 */
	asn_DEF_UniqueMSGID_tags_1,	/* Same as above */
	sizeof(asn_DEF_UniqueMSGID_tags_1)
		/sizeof(asn_DEF_UniqueMSGID_tags_1[0]), /* 1 */
	{ &asn_OER_type_UniqueMSGID_constr_1, &asn_PER_type_UniqueMSGID_constr_1, UniqueMSGID_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

