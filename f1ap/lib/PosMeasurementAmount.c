/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "PosMeasurementAmount.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_PosMeasurementAmount_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_PosMeasurementAmount_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_PosMeasurementAmount_value2enum_1[] = {
	{ 0,	3,	"ma0" },
	{ 1,	3,	"ma1" },
	{ 2,	3,	"ma2" },
	{ 3,	3,	"ma4" },
	{ 4,	3,	"ma8" },
	{ 5,	4,	"ma16" },
	{ 6,	4,	"ma32" },
	{ 7,	4,	"ma64" }
};
static const unsigned int asn_MAP_PosMeasurementAmount_enum2value_1[] = {
	0,	/* ma0(0) */
	1,	/* ma1(1) */
	5,	/* ma16(5) */
	2,	/* ma2(2) */
	6,	/* ma32(6) */
	3,	/* ma4(3) */
	7,	/* ma64(7) */
	4	/* ma8(4) */
};
const asn_INTEGER_specifics_t asn_SPC_PosMeasurementAmount_specs_1 = {
	asn_MAP_PosMeasurementAmount_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PosMeasurementAmount_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PosMeasurementAmount_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PosMeasurementAmount = {
	"PosMeasurementAmount",
	"PosMeasurementAmount",
	&asn_OP_NativeEnumerated,
	asn_DEF_PosMeasurementAmount_tags_1,
	sizeof(asn_DEF_PosMeasurementAmount_tags_1)
		/sizeof(asn_DEF_PosMeasurementAmount_tags_1[0]), /* 1 */
	asn_DEF_PosMeasurementAmount_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosMeasurementAmount_tags_1)
		/sizeof(asn_DEF_PosMeasurementAmount_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_PosMeasurementAmount_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_PosMeasurementAmount_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PosMeasurementAmount_specs_1	/* Additional specs */
};

