/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "ShortDRXCycleLength.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ShortDRXCycleLength_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ShortDRXCycleLength_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  22 }	/* (0..22,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_ShortDRXCycleLength_value2enum_1[] = {
	{ 0,	3,	"ms2" },
	{ 1,	3,	"ms3" },
	{ 2,	3,	"ms4" },
	{ 3,	3,	"ms5" },
	{ 4,	3,	"ms6" },
	{ 5,	3,	"ms7" },
	{ 6,	3,	"ms8" },
	{ 7,	4,	"ms10" },
	{ 8,	4,	"ms14" },
	{ 9,	4,	"ms16" },
	{ 10,	4,	"ms20" },
	{ 11,	4,	"ms30" },
	{ 12,	4,	"ms32" },
	{ 13,	4,	"ms35" },
	{ 14,	4,	"ms40" },
	{ 15,	4,	"ms64" },
	{ 16,	4,	"ms80" },
	{ 17,	5,	"ms128" },
	{ 18,	5,	"ms160" },
	{ 19,	5,	"ms256" },
	{ 20,	5,	"ms320" },
	{ 21,	5,	"ms512" },
	{ 22,	5,	"ms640" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ShortDRXCycleLength_enum2value_1[] = {
	7,	/* ms10(7) */
	17,	/* ms128(17) */
	8,	/* ms14(8) */
	9,	/* ms16(9) */
	18,	/* ms160(18) */
	0,	/* ms2(0) */
	10,	/* ms20(10) */
	19,	/* ms256(19) */
	1,	/* ms3(1) */
	11,	/* ms30(11) */
	12,	/* ms32(12) */
	20,	/* ms320(20) */
	13,	/* ms35(13) */
	2,	/* ms4(2) */
	14,	/* ms40(14) */
	3,	/* ms5(3) */
	21,	/* ms512(21) */
	4,	/* ms6(4) */
	15,	/* ms64(15) */
	22,	/* ms640(22) */
	5,	/* ms7(5) */
	6,	/* ms8(6) */
	16	/* ms80(16) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_ShortDRXCycleLength_specs_1 = {
	asn_MAP_ShortDRXCycleLength_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_ShortDRXCycleLength_enum2value_1,	/* N => "tag"; sorted by N */
	23,	/* Number of elements in the maps */
	24,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ShortDRXCycleLength_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ShortDRXCycleLength = {
	"ShortDRXCycleLength",
	"ShortDRXCycleLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_ShortDRXCycleLength_tags_1,
	sizeof(asn_DEF_ShortDRXCycleLength_tags_1)
		/sizeof(asn_DEF_ShortDRXCycleLength_tags_1[0]), /* 1 */
	asn_DEF_ShortDRXCycleLength_tags_1,	/* Same as above */
	sizeof(asn_DEF_ShortDRXCycleLength_tags_1)
		/sizeof(asn_DEF_ShortDRXCycleLength_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ShortDRXCycleLength_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ShortDRXCycleLength_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ShortDRXCycleLength_specs_1	/* Additional specs */
};

