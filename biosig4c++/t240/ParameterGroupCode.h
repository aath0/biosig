/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_ParameterGroupCode_H_
#define	_ParameterGroupCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ParameterGroupCode */
typedef INTEGER_t	 ParameterGroupCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ParameterGroupCode;
asn_struct_free_f ParameterGroupCode_free;
asn_struct_print_f ParameterGroupCode_print;
asn_constr_check_f ParameterGroupCode_constraint;
ber_type_decoder_f ParameterGroupCode_decode_ber;
der_type_encoder_f ParameterGroupCode_encode_der;
xer_type_decoder_f ParameterGroupCode_decode_xer;
xer_type_encoder_f ParameterGroupCode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ParameterGroupCode_H_ */