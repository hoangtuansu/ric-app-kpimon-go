/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "F1AP-PDU-Contents.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "UE-associatedLogicalF1-ConnectionListResAck.h"

#include "ProtocolIE-SingleContainer.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_UE_associatedLogicalF1_ConnectionListResAck_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65536)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_UE_associatedLogicalF1_ConnectionListResAck_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16, -1,  1,  65536 }	/* (SIZE(1..65536)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_UE_associatedLogicalF1_ConnectionListResAck_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProtocolIE_SingleContainer_126P78,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_UE_associatedLogicalF1_ConnectionListResAck_specs_1 = {
	sizeof(struct UE_associatedLogicalF1_ConnectionListResAck),
	offsetof(struct UE_associatedLogicalF1_ConnectionListResAck, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_UE_associatedLogicalF1_ConnectionListResAck = {
	"UE-associatedLogicalF1-ConnectionListResAck",
	"UE-associatedLogicalF1-ConnectionListResAck",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1,
	sizeof(asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1)
		/sizeof(asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1[0]), /* 1 */
	asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1)
		/sizeof(asn_DEF_UE_associatedLogicalF1_ConnectionListResAck_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_UE_associatedLogicalF1_ConnectionListResAck_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_UE_associatedLogicalF1_ConnectionListResAck_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_UE_associatedLogicalF1_ConnectionListResAck_1,
	1,	/* Single element */
	&asn_SPC_UE_associatedLogicalF1_ConnectionListResAck_specs_1	/* Additional specs */
};

