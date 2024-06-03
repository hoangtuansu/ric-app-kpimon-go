/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "SLDRBs-ToBeModified-Item.h"

#include "SLDRBInformation.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_SLDRBs_ToBeModified_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SLDRBs_ToBeModified_Item, sLDRBID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SLDRBID,
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
		"sLDRBID"
		},
	{ ATF_POINTER, 3, offsetof(struct SLDRBs_ToBeModified_Item, sLDRBInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SLDRBInformation,
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
		"sLDRBInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct SLDRBs_ToBeModified_Item, rLCMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLCMode,
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
		"rLCMode"
		},
	{ ATF_POINTER, 1, offsetof(struct SLDRBs_ToBeModified_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P375,
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
static const int asn_MAP_SLDRBs_ToBeModified_Item_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SLDRBs_ToBeModified_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SLDRBs_ToBeModified_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sLDRBID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sLDRBInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rLCMode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SLDRBs_ToBeModified_Item_specs_1 = {
	sizeof(struct SLDRBs_ToBeModified_Item),
	offsetof(struct SLDRBs_ToBeModified_Item, _asn_ctx),
	asn_MAP_SLDRBs_ToBeModified_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SLDRBs_ToBeModified_Item_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SLDRBs_ToBeModified_Item = {
	"SLDRBs-ToBeModified-Item",
	"SLDRBs-ToBeModified-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_SLDRBs_ToBeModified_Item_tags_1,
	sizeof(asn_DEF_SLDRBs_ToBeModified_Item_tags_1)
		/sizeof(asn_DEF_SLDRBs_ToBeModified_Item_tags_1[0]), /* 1 */
	asn_DEF_SLDRBs_ToBeModified_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_SLDRBs_ToBeModified_Item_tags_1)
		/sizeof(asn_DEF_SLDRBs_ToBeModified_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SLDRBs_ToBeModified_Item_1,
	4,	/* Elements count */
	&asn_SPC_SLDRBs_ToBeModified_Item_specs_1	/* Additional specs */
};

