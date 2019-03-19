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

#include "BasicSafetyMessage.h"

static int
memb_partII_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_partII_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_partII_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_regional_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_partII_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_partII_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_partII_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PartIIcontent_151P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_partII_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_partII_specs_3 = {
	sizeof(struct BasicSafetyMessage__partII),
	offsetof(struct BasicSafetyMessage__partII, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_partII_3 = {
	"partII",
	"partII",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_partII_tags_3,
	sizeof(asn_DEF_partII_tags_3)
		/sizeof(asn_DEF_partII_tags_3[0]) - 1, /* 1 */
	asn_DEF_partII_tags_3,	/* Same as above */
	sizeof(asn_DEF_partII_tags_3)
		/sizeof(asn_DEF_partII_tags_3[0]), /* 2 */
	{ &asn_OER_type_partII_constr_3, &asn_PER_type_partII_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_partII_3,
	1,	/* Single element */
	&asn_SPC_partII_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_regional_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_124P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_5 = {
	sizeof(struct BasicSafetyMessage__regional),
	offsetof(struct BasicSafetyMessage__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_5 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_5,
	sizeof(asn_DEF_regional_tags_5)
		/sizeof(asn_DEF_regional_tags_5[0]) - 1, /* 1 */
	asn_DEF_regional_tags_5,	/* Same as above */
	sizeof(asn_DEF_regional_tags_5)
		/sizeof(asn_DEF_regional_tags_5[0]), /* 2 */
	{ &asn_OER_type_regional_constr_5, &asn_PER_type_regional_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_regional_5,
	1,	/* Single element */
	&asn_SPC_regional_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BasicSafetyMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BasicSafetyMessage, coreData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BSMcoreData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"coreData"
		},
	{ ATF_POINTER, 2, offsetof(struct BasicSafetyMessage, partII),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_partII_3,
		0,
		{ &asn_OER_memb_partII_constr_3, &asn_PER_memb_partII_constr_3,  memb_partII_constraint_1 },
		0, 0, /* No default value */
		"partII"
		},
	{ ATF_POINTER, 1, offsetof(struct BasicSafetyMessage, regional),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_regional_5,
		0,
		{ &asn_OER_memb_regional_constr_5, &asn_PER_memb_regional_constr_5,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_BasicSafetyMessage_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_BasicSafetyMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BasicSafetyMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* coreData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* partII */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_BasicSafetyMessage_specs_1 = {
	sizeof(struct BasicSafetyMessage),
	offsetof(struct BasicSafetyMessage, _asn_ctx),
	asn_MAP_BasicSafetyMessage_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BasicSafetyMessage_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BasicSafetyMessage = {
	"BasicSafetyMessage",
	"BasicSafetyMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_BasicSafetyMessage_tags_1,
	sizeof(asn_DEF_BasicSafetyMessage_tags_1)
		/sizeof(asn_DEF_BasicSafetyMessage_tags_1[0]), /* 1 */
	asn_DEF_BasicSafetyMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_BasicSafetyMessage_tags_1)
		/sizeof(asn_DEF_BasicSafetyMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BasicSafetyMessage_1,
	3,	/* Elements count */
	&asn_SPC_BasicSafetyMessage_specs_1	/* Additional specs */
};

