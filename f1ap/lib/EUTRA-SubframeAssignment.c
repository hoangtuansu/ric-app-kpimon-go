/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "EUTRA-SubframeAssignment.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_EUTRA_SubframeAssignment_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_EUTRA_SubframeAssignment_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_EUTRA_SubframeAssignment_value2enum_1[] = {
	{ 0,	3,	"sa0" },
	{ 1,	3,	"sa1" },
	{ 2,	3,	"sa2" },
	{ 3,	3,	"sa3" },
	{ 4,	3,	"sa4" },
	{ 5,	3,	"sa5" },
	{ 6,	3,	"sa6" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_EUTRA_SubframeAssignment_enum2value_1[] = {
	0,	/* sa0(0) */
	1,	/* sa1(1) */
	2,	/* sa2(2) */
	3,	/* sa3(3) */
	4,	/* sa4(4) */
	5,	/* sa5(5) */
	6	/* sa6(6) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_EUTRA_SubframeAssignment_specs_1 = {
	asn_MAP_EUTRA_SubframeAssignment_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EUTRA_SubframeAssignment_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EUTRA_SubframeAssignment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_SubframeAssignment = {
	"EUTRA-SubframeAssignment",
	"EUTRA-SubframeAssignment",
	&asn_OP_NativeEnumerated,
	asn_DEF_EUTRA_SubframeAssignment_tags_1,
	sizeof(asn_DEF_EUTRA_SubframeAssignment_tags_1)
		/sizeof(asn_DEF_EUTRA_SubframeAssignment_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_SubframeAssignment_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_SubframeAssignment_tags_1)
		/sizeof(asn_DEF_EUTRA_SubframeAssignment_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_EUTRA_SubframeAssignment_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_EUTRA_SubframeAssignment_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EUTRA_SubframeAssignment_specs_1	/* Additional specs */
};

