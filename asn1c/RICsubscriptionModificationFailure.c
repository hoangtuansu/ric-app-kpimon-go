/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-pdu-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#include "RICsubscriptionModificationFailure.h"

asn_TYPE_member_t asn_MBR_RICsubscriptionModificationFailure_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscriptionModificationFailure, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_85P9,
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
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_RICsubscriptionModificationFailure_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICsubscriptionModificationFailure_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_RICsubscriptionModificationFailure_specs_1 = {
	sizeof(struct RICsubscriptionModificationFailure),
	offsetof(struct RICsubscriptionModificationFailure, _asn_ctx),
	asn_MAP_RICsubscriptionModificationFailure_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICsubscriptionModificationFailure = {
	"RICsubscriptionModificationFailure",
	"RICsubscriptionModificationFailure",
	&asn_OP_SEQUENCE,
	asn_DEF_RICsubscriptionModificationFailure_tags_1,
	sizeof(asn_DEF_RICsubscriptionModificationFailure_tags_1)
		/sizeof(asn_DEF_RICsubscriptionModificationFailure_tags_1[0]), /* 1 */
	asn_DEF_RICsubscriptionModificationFailure_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICsubscriptionModificationFailure_tags_1)
		/sizeof(asn_DEF_RICsubscriptionModificationFailure_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICsubscriptionModificationFailure_1,
	1,	/* Elements count */
	&asn_SPC_RICsubscriptionModificationFailure_specs_1	/* Additional specs */
};

