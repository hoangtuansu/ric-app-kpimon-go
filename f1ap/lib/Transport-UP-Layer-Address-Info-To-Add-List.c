/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#include "Transport-UP-Layer-Address-Info-To-Add-List.h"

#include "Transport-UP-Layer-Address-Info-To-Add-Item.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Transport_UP_Layer_Address_Info_To_Add_List_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Transport_UP_Layer_Address_Info_To_Add_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Transport_UP_Layer_Address_Info_To_Add_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Transport_UP_Layer_Address_Info_To_Add_Item,
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
static const ber_tlv_tag_t asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Transport_UP_Layer_Address_Info_To_Add_List_specs_1 = {
	sizeof(struct Transport_UP_Layer_Address_Info_To_Add_List),
	offsetof(struct Transport_UP_Layer_Address_Info_To_Add_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List = {
	"Transport-UP-Layer-Address-Info-To-Add-List",
	"Transport-UP-Layer-Address-Info-To-Add-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1,
	sizeof(asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1)
		/sizeof(asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1[0]), /* 1 */
	asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1)
		/sizeof(asn_DEF_Transport_UP_Layer_Address_Info_To_Add_List_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Transport_UP_Layer_Address_Info_To_Add_List_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Transport_UP_Layer_Address_Info_To_Add_List_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_Transport_UP_Layer_Address_Info_To_Add_List_1,
	1,	/* Single element */
	&asn_SPC_Transport_UP_Layer_Address_Info_To_Add_List_specs_1	/* Additional specs */
};

