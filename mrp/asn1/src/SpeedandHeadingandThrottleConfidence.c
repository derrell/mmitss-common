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

#include "SpeedandHeadingandThrottleConfidence.h"

asn_TYPE_member_t asn_MBR_SpeedandHeadingandThrottleConfidence_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedandHeadingandThrottleConfidence, heading),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedandHeadingandThrottleConfidence, speed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SpeedandHeadingandThrottleConfidence, throttle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ThrottleConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"throttle"
		},
};
static const ber_tlv_tag_t asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SpeedandHeadingandThrottleConfidence_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* throttle */
};
asn_SEQUENCE_specifics_t asn_SPC_SpeedandHeadingandThrottleConfidence_specs_1 = {
	sizeof(struct SpeedandHeadingandThrottleConfidence),
	offsetof(struct SpeedandHeadingandThrottleConfidence, _asn_ctx),
	asn_MAP_SpeedandHeadingandThrottleConfidence_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SpeedandHeadingandThrottleConfidence = {
	"SpeedandHeadingandThrottleConfidence",
	"SpeedandHeadingandThrottleConfidence",
	&asn_OP_SEQUENCE,
	asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1,
	sizeof(asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1)
		/sizeof(asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1[0]), /* 1 */
	asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1)
		/sizeof(asn_DEF_SpeedandHeadingandThrottleConfidence_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SpeedandHeadingandThrottleConfidence_1,
	3,	/* Elements count */
	&asn_SPC_SpeedandHeadingandThrottleConfidence_specs_1	/* Additional specs */
};

