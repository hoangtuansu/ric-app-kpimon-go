/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_PRSInformationPos_H_
#define	_PRSInformationPos_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PRSInformationPos */
typedef struct PRSInformationPos {
	long	 pRS_IDPos;
	long	 pRS_Resource_Set_IDPos;
	long	*pRS_Resource_IDPos;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRSInformationPos_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRSInformationPos;
extern asn_SEQUENCE_specifics_t asn_SPC_PRSInformationPos_specs_1;
extern asn_TYPE_member_t asn_MBR_PRSInformationPos_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _PRSInformationPos_H_ */
#include "asn_internal.h"
