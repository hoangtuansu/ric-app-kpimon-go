/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_SRSResourceSetItem_H_
#define	_SRSResourceSetItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PeriodicityList;
struct SpatialRelationInfo;
struct PathlossReferenceInfo;
struct ProtocolExtensionContainer;

/* SRSResourceSetItem */
typedef struct SRSResourceSetItem {
	long	*numSRSresourcesperset;	/* OPTIONAL */
	struct PeriodicityList	*periodicityList;	/* OPTIONAL */
	struct SpatialRelationInfo	*spatialRelationInfo;	/* OPTIONAL */
	struct PathlossReferenceInfo	*pathlossReferenceInfo;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRSResourceSetItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRSResourceSetItem;
extern asn_SEQUENCE_specifics_t asn_SPC_SRSResourceSetItem_specs_1;
extern asn_TYPE_member_t asn_MBR_SRSResourceSetItem_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SRSResourceSetItem_H_ */
#include "asn_internal.h"
