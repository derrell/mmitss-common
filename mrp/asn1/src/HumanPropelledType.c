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

#include "HumanPropelledType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_HumanPropelledType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_HumanPropelledType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_HumanPropelledType_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	10,	"otherTypes" },
	{ 2,	6,	"onFoot" },
	{ 3,	10,	"skateboard" },
	{ 4,	17,	"pushOrKickScooter" },
	{ 5,	10,	"wheelchair" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_HumanPropelledType_enum2value_1[] = {
	2,	/* onFoot(2) */
	1,	/* otherTypes(1) */
	4,	/* pushOrKickScooter(4) */
	3,	/* skateboard(3) */
	0,	/* unavailable(0) */
	5	/* wheelchair(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_HumanPropelledType_specs_1 = {
	asn_MAP_HumanPropelledType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_HumanPropelledType_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_HumanPropelledType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_HumanPropelledType = {
	"HumanPropelledType",
	"HumanPropelledType",
	&asn_OP_NativeEnumerated,
	asn_DEF_HumanPropelledType_tags_1,
	sizeof(asn_DEF_HumanPropelledType_tags_1)
		/sizeof(asn_DEF_HumanPropelledType_tags_1[0]), /* 1 */
	asn_DEF_HumanPropelledType_tags_1,	/* Same as above */
	sizeof(asn_DEF_HumanPropelledType_tags_1)
		/sizeof(asn_DEF_HumanPropelledType_tags_1[0]), /* 1 */
	{ &asn_OER_type_HumanPropelledType_constr_1, &asn_PER_type_HumanPropelledType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_HumanPropelledType_specs_1	/* Additional specs */
};

