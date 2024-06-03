/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1AP-IEs.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -gen-APER`
 */

#ifndef	_TRPInformationTypeResponseItem_H_
#define	_TRPInformationTypeResponseItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NRPCI.h"
#include "NativeInteger.h"
#include "RelativeTime1900.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TRPInformationTypeResponseItem_PR {
	TRPInformationTypeResponseItem_PR_NOTHING,	/* No components present */
	TRPInformationTypeResponseItem_PR_pCI_NR,
	TRPInformationTypeResponseItem_PR_nG_RAN_CGI,
	TRPInformationTypeResponseItem_PR_nRARFCN,
	TRPInformationTypeResponseItem_PR_pRSConfiguration,
	TRPInformationTypeResponseItem_PR_sSBinformation,
	TRPInformationTypeResponseItem_PR_sFNInitialisationTime,
	TRPInformationTypeResponseItem_PR_spatialDirectionInformation,
	TRPInformationTypeResponseItem_PR_geographicalCoordinates,
	TRPInformationTypeResponseItem_PR_choice_extension
} TRPInformationTypeResponseItem_PR;

/* Forward declarations */
struct NRCGI;
struct PRSConfiguration;
struct SSBInformation;
struct SpatialDirectionInformation;
struct GeographicalCoordinates;
struct ProtocolIE_SingleContainer;

/* TRPInformationTypeResponseItem */
typedef struct TRPInformationTypeResponseItem {
	TRPInformationTypeResponseItem_PR present;
	union TRPInformationTypeResponseItem_u {
		NRPCI_t	 pCI_NR;
		struct NRCGI	*nG_RAN_CGI;
		long	 nRARFCN;
		struct PRSConfiguration	*pRSConfiguration;
		struct SSBInformation	*sSBinformation;
		RelativeTime1900_t	 sFNInitialisationTime;
		struct SpatialDirectionInformation	*spatialDirectionInformation;
		struct GeographicalCoordinates	*geographicalCoordinates;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TRPInformationTypeResponseItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TRPInformationTypeResponseItem;
extern asn_CHOICE_specifics_t asn_SPC_TRPInformationTypeResponseItem_specs_1;
extern asn_TYPE_member_t asn_MBR_TRPInformationTypeResponseItem_1[9];
extern asn_per_constraints_t asn_PER_type_TRPInformationTypeResponseItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _TRPInformationTypeResponseItem_H_ */
#include "asn_internal.h"
