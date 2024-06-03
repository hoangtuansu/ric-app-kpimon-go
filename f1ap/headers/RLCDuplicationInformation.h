/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_RLCDuplicationInformation_H_
#define	_RLCDuplicationInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RLCDuplicationStateList.h"
#include "PrimaryPathIndication.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* RLCDuplicationInformation */
typedef struct RLCDuplicationInformation {
	RLCDuplicationStateList_t	 rLCDuplicationStateList;
	PrimaryPathIndication_t	*primaryPathIndication;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLCDuplicationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLCDuplicationInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_RLCDuplicationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_RLCDuplicationInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RLCDuplicationInformation_H_ */
#include "asn_internal.h"
