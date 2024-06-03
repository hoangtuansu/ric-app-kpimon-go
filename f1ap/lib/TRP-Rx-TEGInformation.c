/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "TRP-Rx-TEGInformation.h"

#include "ProtocolExtensionContainer.h"
static int
memb_tRP_Rx_TEGID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 31L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_tRP_Rx_TEGID_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..31) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_tRP_Rx_TEGID_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_TRP_Rx_TEGInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TRP_Rx_TEGInformation, tRP_Rx_TEGID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_tRP_Rx_TEGID_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_tRP_Rx_TEGID_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_tRP_Rx_TEGID_constraint_1
		},
		0, 0, /* No default value */
		"tRP-Rx-TEGID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TRP_Rx_TEGInformation, tRP_Rx_TimingErrorMargin),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimingErrorMargin,
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
		"tRP-Rx-TimingErrorMargin"
		},
	{ ATF_POINTER, 1, offsetof(struct TRP_Rx_TEGInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P453,
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
static const int asn_MAP_TRP_Rx_TEGInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_TRP_Rx_TEGInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TRP_Rx_TEGInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tRP-Rx-TEGID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tRP-Rx-TimingErrorMargin */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TRP_Rx_TEGInformation_specs_1 = {
	sizeof(struct TRP_Rx_TEGInformation),
	offsetof(struct TRP_Rx_TEGInformation, _asn_ctx),
	asn_MAP_TRP_Rx_TEGInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TRP_Rx_TEGInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TRP_Rx_TEGInformation = {
	"TRP-Rx-TEGInformation",
	"TRP-Rx-TEGInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_TRP_Rx_TEGInformation_tags_1,
	sizeof(asn_DEF_TRP_Rx_TEGInformation_tags_1)
		/sizeof(asn_DEF_TRP_Rx_TEGInformation_tags_1[0]), /* 1 */
	asn_DEF_TRP_Rx_TEGInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_TRP_Rx_TEGInformation_tags_1)
		/sizeof(asn_DEF_TRP_Rx_TEGInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_TRP_Rx_TEGInformation_1,
	3,	/* Elements count */
	&asn_SPC_TRP_Rx_TEGInformation_specs_1	/* Additional specs */
};

