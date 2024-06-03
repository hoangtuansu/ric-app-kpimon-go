/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "BAPlayerBHRLCchannelMappingInfo.h"

#include "BAPlayerBHRLCchannelMappingInfoList.h"
#include "MappingInformationtoRemove.h"
#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_BAPlayerBHRLCchannelMappingInfo_1[] = {
	{ ATF_POINTER, 3, offsetof(struct BAPlayerBHRLCchannelMappingInfo, bAPlayerBHRLCchannelMappingInfoToAdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BAPlayerBHRLCchannelMappingInfoList,
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
		"bAPlayerBHRLCchannelMappingInfoToAdd"
		},
	{ ATF_POINTER, 2, offsetof(struct BAPlayerBHRLCchannelMappingInfo, bAPlayerBHRLCchannelMappingInfoToRemove),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MappingInformationtoRemove,
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
		"bAPlayerBHRLCchannelMappingInfoToRemove"
		},
	{ ATF_POINTER, 1, offsetof(struct BAPlayerBHRLCchannelMappingInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P21,
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
static const int asn_MAP_BAPlayerBHRLCchannelMappingInfo_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BAPlayerBHRLCchannelMappingInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bAPlayerBHRLCchannelMappingInfoToAdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bAPlayerBHRLCchannelMappingInfoToRemove */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_BAPlayerBHRLCchannelMappingInfo_specs_1 = {
	sizeof(struct BAPlayerBHRLCchannelMappingInfo),
	offsetof(struct BAPlayerBHRLCchannelMappingInfo, _asn_ctx),
	asn_MAP_BAPlayerBHRLCchannelMappingInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BAPlayerBHRLCchannelMappingInfo_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BAPlayerBHRLCchannelMappingInfo = {
	"BAPlayerBHRLCchannelMappingInfo",
	"BAPlayerBHRLCchannelMappingInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1,
	sizeof(asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1)
		/sizeof(asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1[0]), /* 1 */
	asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1)
		/sizeof(asn_DEF_BAPlayerBHRLCchannelMappingInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BAPlayerBHRLCchannelMappingInfo_1,
	3,	/* Elements count */
	&asn_SPC_BAPlayerBHRLCchannelMappingInfo_specs_1	/* Additional specs */
};

