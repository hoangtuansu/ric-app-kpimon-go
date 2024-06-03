/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "BroadcastMRBs-ToBeModified-Item.h"

#include "QoSFlowLevelQoSParameters.h"
#include "MBS-Flows-Mapped-To-MRB-List.h"
#include "BCBearerContextF1U-TNLInfo.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_BroadcastMRBs_ToBeModified_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BroadcastMRBs_ToBeModified_Item, mRB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MRB_ID,
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
		"mRB-ID"
		},
	{ ATF_POINTER, 4, offsetof(struct BroadcastMRBs_ToBeModified_Item, mRB_QoSInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QoSFlowLevelQoSParameters,
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
		"mRB-QoSInformation"
		},
	{ ATF_POINTER, 3, offsetof(struct BroadcastMRBs_ToBeModified_Item, mBS_Flows_Mapped_To_MRB_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBS_Flows_Mapped_To_MRB_List,
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
		"mBS-Flows-Mapped-To-MRB-List"
		},
	{ ATF_POINTER, 2, offsetof(struct BroadcastMRBs_ToBeModified_Item, bcBearerCtxtF1U_TNLInfoatCU),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_BCBearerContextF1U_TNLInfo,
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
		"bcBearerCtxtF1U-TNLInfoatCU"
		},
	{ ATF_POINTER, 1, offsetof(struct BroadcastMRBs_ToBeModified_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P47,
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
static const int asn_MAP_BroadcastMRBs_ToBeModified_Item_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BroadcastMRBs_ToBeModified_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mRB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mRB-QoSInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mBS-Flows-Mapped-To-MRB-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bcBearerCtxtF1U-TNLInfoatCU */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_BroadcastMRBs_ToBeModified_Item_specs_1 = {
	sizeof(struct BroadcastMRBs_ToBeModified_Item),
	offsetof(struct BroadcastMRBs_ToBeModified_Item, _asn_ctx),
	asn_MAP_BroadcastMRBs_ToBeModified_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_BroadcastMRBs_ToBeModified_Item_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BroadcastMRBs_ToBeModified_Item = {
	"BroadcastMRBs-ToBeModified-Item",
	"BroadcastMRBs-ToBeModified-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1,
	sizeof(asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1)
		/sizeof(asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1[0]), /* 1 */
	asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1)
		/sizeof(asn_DEF_BroadcastMRBs_ToBeModified_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BroadcastMRBs_ToBeModified_Item_1,
	5,	/* Elements count */
	&asn_SPC_BroadcastMRBs_ToBeModified_Item_specs_1	/* Additional specs */
};

