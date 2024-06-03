/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "DLPRSResourceCoordinates.h"

#include "ProtocolExtensionContainer.h"
#include "DLPRSResourceSetARP.h"
static int
memb_listofDL_PRSResourceSetARP_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 2UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_listofDL_PRSResourceSetARP_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_listofDL_PRSResourceSetARP_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_listofDL_PRSResourceSetARP_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_listofDL_PRSResourceSetARP_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_listofDL_PRSResourceSetARP_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DLPRSResourceSetARP,
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
static const ber_tlv_tag_t asn_DEF_listofDL_PRSResourceSetARP_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_listofDL_PRSResourceSetARP_specs_2 = {
	sizeof(struct DLPRSResourceCoordinates__listofDL_PRSResourceSetARP),
	offsetof(struct DLPRSResourceCoordinates__listofDL_PRSResourceSetARP, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_listofDL_PRSResourceSetARP_2 = {
	"listofDL-PRSResourceSetARP",
	"listofDL-PRSResourceSetARP",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_listofDL_PRSResourceSetARP_tags_2,
	sizeof(asn_DEF_listofDL_PRSResourceSetARP_tags_2)
		/sizeof(asn_DEF_listofDL_PRSResourceSetARP_tags_2[0]) - 1, /* 1 */
	asn_DEF_listofDL_PRSResourceSetARP_tags_2,	/* Same as above */
	sizeof(asn_DEF_listofDL_PRSResourceSetARP_tags_2)
		/sizeof(asn_DEF_listofDL_PRSResourceSetARP_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_listofDL_PRSResourceSetARP_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_listofDL_PRSResourceSetARP_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_listofDL_PRSResourceSetARP_2,
	1,	/* Single element */
	&asn_SPC_listofDL_PRSResourceSetARP_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DLPRSResourceCoordinates_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DLPRSResourceCoordinates, listofDL_PRSResourceSetARP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_listofDL_PRSResourceSetARP_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_listofDL_PRSResourceSetARP_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_listofDL_PRSResourceSetARP_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_listofDL_PRSResourceSetARP_constraint_1
		},
		0, 0, /* No default value */
		"listofDL-PRSResourceSetARP"
		},
	{ ATF_POINTER, 1, offsetof(struct DLPRSResourceCoordinates, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_160P87,
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
static const int asn_MAP_DLPRSResourceCoordinates_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_DLPRSResourceCoordinates_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DLPRSResourceCoordinates_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* listofDL-PRSResourceSetARP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_DLPRSResourceCoordinates_specs_1 = {
	sizeof(struct DLPRSResourceCoordinates),
	offsetof(struct DLPRSResourceCoordinates, _asn_ctx),
	asn_MAP_DLPRSResourceCoordinates_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DLPRSResourceCoordinates_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DLPRSResourceCoordinates = {
	"DLPRSResourceCoordinates",
	"DLPRSResourceCoordinates",
	&asn_OP_SEQUENCE,
	asn_DEF_DLPRSResourceCoordinates_tags_1,
	sizeof(asn_DEF_DLPRSResourceCoordinates_tags_1)
		/sizeof(asn_DEF_DLPRSResourceCoordinates_tags_1[0]), /* 1 */
	asn_DEF_DLPRSResourceCoordinates_tags_1,	/* Same as above */
	sizeof(asn_DEF_DLPRSResourceCoordinates_tags_1)
		/sizeof(asn_DEF_DLPRSResourceCoordinates_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_DLPRSResourceCoordinates_1,
	2,	/* Elements count */
	&asn_SPC_DLPRSResourceCoordinates_specs_1	/* Additional specs */
};

