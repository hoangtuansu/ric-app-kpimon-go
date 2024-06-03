/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "SSB-subcarrierSpacing.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_SSB_subcarrierSpacing_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SSB_subcarrierSpacing_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_SSB_subcarrierSpacing_value2enum_1[] = {
	{ 0,	5,	"kHz15" },
	{ 1,	5,	"kHz30" },
	{ 2,	6,	"kHz120" },
	{ 3,	6,	"kHz240" },
	{ 4,	6,	"spare3" },
	{ 5,	6,	"spare2" },
	{ 6,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SSB_subcarrierSpacing_enum2value_1[] = {
	2,	/* kHz120(2) */
	0,	/* kHz15(0) */
	3,	/* kHz240(3) */
	1,	/* kHz30(1) */
	6,	/* spare1(6) */
	5,	/* spare2(5) */
	4	/* spare3(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SSB_subcarrierSpacing_specs_1 = {
	asn_MAP_SSB_subcarrierSpacing_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SSB_subcarrierSpacing_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SSB_subcarrierSpacing_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SSB_subcarrierSpacing = {
	"SSB-subcarrierSpacing",
	"SSB-subcarrierSpacing",
	&asn_OP_NativeEnumerated,
	asn_DEF_SSB_subcarrierSpacing_tags_1,
	sizeof(asn_DEF_SSB_subcarrierSpacing_tags_1)
		/sizeof(asn_DEF_SSB_subcarrierSpacing_tags_1[0]), /* 1 */
	asn_DEF_SSB_subcarrierSpacing_tags_1,	/* Same as above */
	sizeof(asn_DEF_SSB_subcarrierSpacing_tags_1)
		/sizeof(asn_DEF_SSB_subcarrierSpacing_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_SSB_subcarrierSpacing_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SSB_subcarrierSpacing_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SSB_subcarrierSpacing_specs_1	/* Additional specs */
};

