/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "Child-Nodes-List-Item.h"

#include "Child-Node-Cells-List.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Child_Nodes_List_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Child_Nodes_List_Item, gNB_CU_UE_F1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_UE_F1AP_ID,
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
		"gNB-CU-UE-F1AP-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Child_Nodes_List_Item, gNB_DU_UE_F1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_DU_UE_F1AP_ID,
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
		"gNB-DU-UE-F1AP-ID"
		},
	{ ATF_POINTER, 2, offsetof(struct Child_Nodes_List_Item, child_Node_Cells_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Child_Node_Cells_List,
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
		"child-Node-Cells-List"
		},
	{ ATF_POINTER, 1, offsetof(struct Child_Nodes_List_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P72,
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
static const int asn_MAP_Child_Nodes_List_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_Child_Nodes_List_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Child_Nodes_List_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNB-CU-UE-F1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gNB-DU-UE-F1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* child-Node-Cells-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Child_Nodes_List_Item_specs_1 = {
	sizeof(struct Child_Nodes_List_Item),
	offsetof(struct Child_Nodes_List_Item, _asn_ctx),
	asn_MAP_Child_Nodes_List_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_Child_Nodes_List_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Child_Nodes_List_Item = {
	"Child-Nodes-List-Item",
	"Child-Nodes-List-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_Child_Nodes_List_Item_tags_1,
	sizeof(asn_DEF_Child_Nodes_List_Item_tags_1)
		/sizeof(asn_DEF_Child_Nodes_List_Item_tags_1[0]), /* 1 */
	asn_DEF_Child_Nodes_List_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_Child_Nodes_List_Item_tags_1)
		/sizeof(asn_DEF_Child_Nodes_List_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Child_Nodes_List_Item_1,
	4,	/* Elements count */
	&asn_SPC_Child_Nodes_List_Item_specs_1	/* Additional specs */
};

