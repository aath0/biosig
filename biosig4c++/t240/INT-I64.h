/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_INT_I64_H_
#define	_INT_I64_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* INT-I64 */
typedef INTEGER_t	 INT_I64_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_INT_I64;
asn_struct_free_f INT_I64_free;
asn_struct_print_f INT_I64_print;
asn_constr_check_f INT_I64_constraint;
ber_type_decoder_f INT_I64_decode_ber;
der_type_encoder_f INT_I64_encode_der;
xer_type_decoder_f INT_I64_decode_xer;
xer_type_encoder_f INT_I64_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _INT_I64_H_ */
