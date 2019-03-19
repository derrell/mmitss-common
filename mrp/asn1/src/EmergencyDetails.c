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

#include "EmergencyDetails.h"

asn_TYPE_member_t asn_MBR_EmergencyDetails_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyDetails, sspRights),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSPindex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sspRights"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyDetails, sirenUse),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SirenInUse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sirenUse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyDetails, lightsUse),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LightbarInUse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lightsUse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyDetails, multi),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiVehicleResponse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multi"
		},
	{ ATF_POINTER, 2, offsetof(struct EmergencyDetails, events),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrivilegedEvents,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"events"
		},
	{ ATF_POINTER, 1, offsetof(struct EmergencyDetails, responseType),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResponseType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"responseType"
		},
};
static const int asn_MAP_EmergencyDetails_oms_1[] = { 4, 5 };
static const ber_tlv_tag_t asn_DEF_EmergencyDetails_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EmergencyDetails_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sspRights */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sirenUse */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lightsUse */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* multi */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* events */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* responseType */
};
asn_SEQUENCE_specifics_t asn_SPC_EmergencyDetails_specs_1 = {
	sizeof(struct EmergencyDetails),
	offsetof(struct EmergencyDetails, _asn_ctx),
	asn_MAP_EmergencyDetails_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_EmergencyDetails_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EmergencyDetails = {
	"EmergencyDetails",
	"EmergencyDetails",
	&asn_OP_SEQUENCE,
	asn_DEF_EmergencyDetails_tags_1,
	sizeof(asn_DEF_EmergencyDetails_tags_1)
		/sizeof(asn_DEF_EmergencyDetails_tags_1[0]), /* 1 */
	asn_DEF_EmergencyDetails_tags_1,	/* Same as above */
	sizeof(asn_DEF_EmergencyDetails_tags_1)
		/sizeof(asn_DEF_EmergencyDetails_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EmergencyDetails_1,
	6,	/* Elements count */
	&asn_SPC_EmergencyDetails_specs_1	/* Additional specs */
};

