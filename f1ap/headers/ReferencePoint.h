/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_ReferencePoint_H_
#define	_ReferencePoint_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CoordinateID.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReferencePoint_PR {
	ReferencePoint_PR_NOTHING,	/* No components present */
	ReferencePoint_PR_coordinateID,
	ReferencePoint_PR_referencePointCoordinate,
	ReferencePoint_PR_referencePointCoordinateHA,
	ReferencePoint_PR_choice_Extension
} ReferencePoint_PR;

/* Forward declarations */
struct AccessPointPosition;
struct NGRANHighAccuracyAccessPointPosition;
struct ProtocolIE_SingleContainer;

/* ReferencePoint */
typedef struct ReferencePoint {
	ReferencePoint_PR present;
	union ReferencePoint_u {
		CoordinateID_t	 coordinateID;
		struct AccessPointPosition	*referencePointCoordinate;
		struct NGRANHighAccuracyAccessPointPosition	*referencePointCoordinateHA;
		struct ProtocolIE_SingleContainer	*choice_Extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReferencePoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReferencePoint;
extern asn_CHOICE_specifics_t asn_SPC_ReferencePoint_specs_1;
extern asn_TYPE_member_t asn_MBR_ReferencePoint_1[4];
extern asn_per_constraints_t asn_PER_type_ReferencePoint_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ReferencePoint_H_ */
#include "asn_internal.h"
