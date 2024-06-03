/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SRSConfig_H_
#define	_SRSConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SRSResource_List;
struct PosSRSResource_List;
struct SRSResourceSet_List;
struct PosSRSResourceSet_List;
struct ProtocolExtensionContainer;

/* SRSConfig */
typedef struct SRSConfig {
	struct SRSResource_List	*sRSResource_List;	/* OPTIONAL */
	struct PosSRSResource_List	*posSRSResource_List;	/* OPTIONAL */
	struct SRSResourceSet_List	*sRSResourceSet_List;	/* OPTIONAL */
	struct PosSRSResourceSet_List	*posSRSResourceSet_List;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRSConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRSConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_SRSConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SRSConfig_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SRSConfig_H_ */
#include "asn_internal.h"
