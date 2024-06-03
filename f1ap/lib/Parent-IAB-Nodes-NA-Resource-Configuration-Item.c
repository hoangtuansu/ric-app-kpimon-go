/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "Parent-IAB-Nodes-NA-Resource-Configuration-Item.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Parent_IAB_Nodes_NA_Resource_Configuration_Item_1[] = {
	{ ATF_POINTER, 4, offsetof(struct Parent_IAB_Nodes_NA_Resource_Configuration_Item, nADownlink),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NADownlink,
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
		"nADownlink"
		},
	{ ATF_POINTER, 3, offsetof(struct Parent_IAB_Nodes_NA_Resource_Configuration_Item, nAUplink),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAUplink,
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
		"nAUplink"
		},
	{ ATF_POINTER, 2, offsetof(struct Parent_IAB_Nodes_NA_Resource_Configuration_Item, nAFlexible),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAFlexible,
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
		"nAFlexible"
		},
	{ ATF_POINTER, 1, offsetof(struct Parent_IAB_Nodes_NA_Resource_Configuration_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P258,
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
static const int asn_MAP_Parent_IAB_Nodes_NA_Resource_Configuration_Item_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nADownlink */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nAUplink */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nAFlexible */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Parent_IAB_Nodes_NA_Resource_Configuration_Item_specs_1 = {
	sizeof(struct Parent_IAB_Nodes_NA_Resource_Configuration_Item),
	offsetof(struct Parent_IAB_Nodes_NA_Resource_Configuration_Item, _asn_ctx),
	asn_MAP_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Parent_IAB_Nodes_NA_Resource_Configuration_Item_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item = {
	"Parent-IAB-Nodes-NA-Resource-Configuration-Item",
	"Parent-IAB-Nodes-NA-Resource-Configuration-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1,
	sizeof(asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1)
		/sizeof(asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1[0]), /* 1 */
	asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1)
		/sizeof(asn_DEF_Parent_IAB_Nodes_NA_Resource_Configuration_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Parent_IAB_Nodes_NA_Resource_Configuration_Item_1,
	4,	/* Elements count */
	&asn_SPC_Parent_IAB_Nodes_NA_Resource_Configuration_Item_specs_1	/* Additional specs */
};

