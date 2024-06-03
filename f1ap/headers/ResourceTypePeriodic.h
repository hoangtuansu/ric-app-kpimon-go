/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_ResourceTypePeriodic_H_
#define	_ResourceTypePeriodic_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ResourceTypePeriodic__periodicity {
	ResourceTypePeriodic__periodicity_slot1	= 0,
	ResourceTypePeriodic__periodicity_slot2	= 1,
	ResourceTypePeriodic__periodicity_slot4	= 2,
	ResourceTypePeriodic__periodicity_slot5	= 3,
	ResourceTypePeriodic__periodicity_slot8	= 4,
	ResourceTypePeriodic__periodicity_slot10	= 5,
	ResourceTypePeriodic__periodicity_slot16	= 6,
	ResourceTypePeriodic__periodicity_slot20	= 7,
	ResourceTypePeriodic__periodicity_slot32	= 8,
	ResourceTypePeriodic__periodicity_slot40	= 9,
	ResourceTypePeriodic__periodicity_slot64	= 10,
	ResourceTypePeriodic__periodicity_slot80	= 11,
	ResourceTypePeriodic__periodicity_slot160	= 12,
	ResourceTypePeriodic__periodicity_slot320	= 13,
	ResourceTypePeriodic__periodicity_slot640	= 14,
	ResourceTypePeriodic__periodicity_slot1280	= 15,
	ResourceTypePeriodic__periodicity_slot2560	= 16
	/*
	 * Enumeration is extensible
	 */
} e_ResourceTypePeriodic__periodicity;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ResourceTypePeriodic */
typedef struct ResourceTypePeriodic {
	long	 periodicity;
	long	 offset;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResourceTypePeriodic_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicity_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ResourceTypePeriodic;
extern asn_SEQUENCE_specifics_t asn_SPC_ResourceTypePeriodic_specs_1;
extern asn_TYPE_member_t asn_MBR_ResourceTypePeriodic_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ResourceTypePeriodic_H_ */
#include "asn_internal.h"
