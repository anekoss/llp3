/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev */

#include "alltypes_legacy.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

pb_byte_t SubMessage_DEFAULT[] = {0x0a, 0x01, 0x31, 0x10, 0x02, 0x1d, 0x03, 0x00, 0x00, 0x00, 0x00};
pb_byte_t EmptyMessage_DEFAULT[] = {0x00};
pb_byte_t Limits_DEFAULT[] = {0x08, 0xff, 0xff, 0xff, 0xff, 0x07, 0x10, 0x81, 0x80, 0x80, 0x80, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x01, 0x18, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x20, 0x00, 0x28, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x30, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x01, 0x38, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x40, 0x00, 0x48, 0xff, 0xff, 0xff, 0xff, 0x07, 0x50, 0x81, 0x80, 0x80, 0x80, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00};
pb_byte_t AllTypes_DEFAULT[] = {0xc8, 0x02, 0xc9, 0x1f, 0xd0, 0x02, 0xca, 0x1f, 0xd8, 0x02, 0xcb, 0x1f, 0xe0, 0x02, 0xcc, 0x1f, 0xe8, 0x02, 0x9a, 0x3f, 0xf0, 0x02, 0x9c, 0x3f, 0xf8, 0x02, 0x00, 0x85, 0x03, 0xd0, 0x0f, 0x00, 0x00, 0x8d, 0x03, 0xd1, 0x0f, 0x00, 0x00, 0x95, 0x03, 0x00, 0x20, 0x7d, 0x45, 0x99, 0x03, 0xd3, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x03, 0xd4, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa9, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xaf, 0x40, 0xb2, 0x03, 0x04, 0x34, 0x30, 0x35, 0x34, 0xba, 0x03, 0x04, 0x34, 0x30, 0x35, 0x35, 0xc8, 0x03, 0x02, 0x00};


PB_BIND(SubMessage, SubMessage, AUTO)


PB_BIND(EmptyMessage, EmptyMessage, AUTO)


PB_BIND(Limits, Limits, AUTO)


PB_BIND(AllTypes, AllTypes, 2)




#ifndef PB_CONVERT_DOUBLE_FLOAT
/* On some platforms (such as AVR), double is really float.
 * Using double on these platforms is not directly supported
 * by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)
#endif

/* @@protoc_insertion_point(eof) */
