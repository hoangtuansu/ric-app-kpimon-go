/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_Frequency_Domain_HSNA_Configuration_Item_H_
#define	_Frequency_Domain_HSNA_Configuration_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "Frequency-Domain-HSNA-Slot-Configuration-List.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Frequency-Domain-HSNA-Configuration-Item */
typedef struct Frequency_Domain_HSNA_Configuration_Item {
	long	 rBSetIndex;
	Frequency_Domain_HSNA_Slot_Configuration_List_t	 frequency_Domain_HSNA_Slot_Configuration_List;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Frequency_Domain_HSNA_Configuration_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Frequency_Domain_HSNA_Configuration_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Frequency_Domain_HSNA_Configuration_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Frequency_Domain_HSNA_Configuration_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Frequency_Domain_HSNA_Configuration_Item_H_ */
#include "asn_internal.h"
