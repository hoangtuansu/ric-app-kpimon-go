/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "SpatialRelationInfo.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_SpatialRelationInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SpatialRelationInfo, spatialRelationforResourceID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpatialRelationforResourceID,
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
		"spatialRelationforResourceID"
		},
	{ ATF_POINTER, 1, offsetof(struct SpatialRelationInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P392,
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
static const int asn_MAP_SpatialRelationInfo_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_SpatialRelationInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SpatialRelationInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* spatialRelationforResourceID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SpatialRelationInfo_specs_1 = {
	sizeof(struct SpatialRelationInfo),
	offsetof(struct SpatialRelationInfo, _asn_ctx),
	asn_MAP_SpatialRelationInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SpatialRelationInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SpatialRelationInfo = {
	"SpatialRelationInfo",
	"SpatialRelationInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_SpatialRelationInfo_tags_1,
	sizeof(asn_DEF_SpatialRelationInfo_tags_1)
		/sizeof(asn_DEF_SpatialRelationInfo_tags_1[0]), /* 1 */
	asn_DEF_SpatialRelationInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpatialRelationInfo_tags_1)
		/sizeof(asn_DEF_SpatialRelationInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SpatialRelationInfo_1,
	2,	/* Elements count */
	&asn_SPC_SpatialRelationInfo_specs_1	/* Additional specs */
};

