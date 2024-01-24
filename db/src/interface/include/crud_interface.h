#ifndef CRUD_INTERFACE_H
#define CRUD_INTERFACE_H
#include "basic_crud.h"
#include "message.pb.h"


struct result_list_tuple {
    struct result_list_tuple *prev;
    struct tuple *value;
    uint64_t id;
};

size_t add_tuple(FILE *file, uint64_t *fields, uint64_t parent_id);
enum crud_operation_status remove_tuple(FILE *file, uint64_t id, uint8_t str_flag);
enum crud_operation_status get_tuple(FILE *file, uint64_t **fields, uint64_t id);
enum crud_operation_status find_by_field(FILE *file, uint64_t field_number, uint64_t *condition, struct result_list_tuple **result);
enum crud_operation_status find_by_parent(FILE *file, uint64_t parent_id, struct result_list_tuple **result);
size_t
find_by_filters(FILE *file, Query_tree_Filter *filt, size_t filt_count, struct result_list_tuple **result, char **pattern_names);
enum crud_operation_status update_tuple(FILE *file, uint64_t field_number, uint64_t *new_value, uint64_t id);
void print_tree_header_from_file(FILE *file);
void print_tuple_array_from_file(FILE *file);

#endif

