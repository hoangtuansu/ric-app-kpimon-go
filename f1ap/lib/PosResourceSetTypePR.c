/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "PosResourceSetTypePR.h"

#include "ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_posperiodicSet_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_posperiodicSet_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_posperiodicSet_value2enum_2[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_posperiodicSet_enum2value_2[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_posperiodicSet_specs_2 = {
	asn_MAP_posperiodicSet_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_posperiodicSet_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_posperiodicSet_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_posperiodicSet_2 = {
	"posperiodicSet",
	"posperiodicSet",
	&asn_OP_NativeEnumerated,
	asn_DEF_posperiodicSet_tags_2,
	sizeof(asn_DEF_posperiodicSet_tags_2)
		/sizeof(asn_DEF_posperiodicSet_tags_2[0]) - 1, /* 1 */
	asn_DEF_posperiodicSet_tags_2,	/* Same as above */
	sizeof(asn_DEF_posperiodicSet_tags_2)
		/sizeof(asn_DEF_posperiodicSet_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_posperiodicSet_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_posperiodicSet_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_posperiodicSet_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PosResourceSetTypePR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PosResourceSetTypePR, posperiodicSet),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_posperiodicSet_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"posperiodicSet"
		},
	{ ATF_POINTER, 1, offsetof(struct PosResourceSetTypePR, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P281,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_PosResourceSetTypePR_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PosResourceSetTypePR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PosResourceSetTypePR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posperiodicSet */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_PosResourceSetTypePR_specs_1 = {
	sizeof(struct PosResourceSetTypePR),
	offsetof(struct PosResourceSetTypePR, _asn_ctx),
	asn_MAP_PosResourceSetTypePR_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PosResourceSetTypePR_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PosResourceSetTypePR = {
	"PosResourceSetTypePR",
	"PosResourceSetTypePR",
	&asn_OP_SEQUENCE,
	asn_DEF_PosResourceSetTypePR_tags_1,
	sizeof(asn_DEF_PosResourceSetTypePR_tags_1)
		/sizeof(asn_DEF_PosResourceSetTypePR_tags_1[0]), /* 1 */
	asn_DEF_PosResourceSetTypePR_tags_1,	/* Same as above */
	sizeof(asn_DEF_PosResourceSetTypePR_tags_1)
		/sizeof(asn_DEF_PosResourceSetTypePR_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PosResourceSetTypePR_1,
	2,	/* Elements count */
	&asn_SPC_PosResourceSetTypePR_specs_1	/* Additional specs */
};

