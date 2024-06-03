/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "HSNASlotConfigItem.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_HSNASlotConfigItem_1[] = {
	{ ATF_POINTER, 4, offsetof(struct HSNASlotConfigItem, hSNADownlink),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSNADownlink,
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
		"hSNADownlink"
		},
	{ ATF_POINTER, 3, offsetof(struct HSNASlotConfigItem, hSNAUplink),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSNAUplink,
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
		"hSNAUplink"
		},
	{ ATF_POINTER, 2, offsetof(struct HSNASlotConfigItem, hSNAFlexible),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSNAFlexible,
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
		"hSNAFlexible"
		},
	{ ATF_POINTER, 1, offsetof(struct HSNASlotConfigItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P164,
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
static const int asn_MAP_HSNASlotConfigItem_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_HSNASlotConfigItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HSNASlotConfigItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hSNADownlink */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hSNAUplink */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hSNAFlexible */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_HSNASlotConfigItem_specs_1 = {
	sizeof(struct HSNASlotConfigItem),
	offsetof(struct HSNASlotConfigItem, _asn_ctx),
	asn_MAP_HSNASlotConfigItem_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_HSNASlotConfigItem_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HSNASlotConfigItem = {
	"HSNASlotConfigItem",
	"HSNASlotConfigItem",
	&asn_OP_SEQUENCE,
	asn_DEF_HSNASlotConfigItem_tags_1,
	sizeof(asn_DEF_HSNASlotConfigItem_tags_1)
		/sizeof(asn_DEF_HSNASlotConfigItem_tags_1[0]), /* 1 */
	asn_DEF_HSNASlotConfigItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_HSNASlotConfigItem_tags_1)
		/sizeof(asn_DEF_HSNASlotConfigItem_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_HSNASlotConfigItem_1,
	4,	/* Elements count */
	&asn_SPC_HSNASlotConfigItem_specs_1	/* Additional specs */
};

