#include "ui/interactive.h"
#include "interface/include/basic_crud.h"
#pragma once

void init_file(FILE *file);

FILE* initializer(int argc, char **argv) {
    char *main_filename;
    char *arg_filename;
    FILE *file;
    FILE *parsable;
    char flag;


    if (argc < 3 || argc > 4) {
        printf("Wrong number of args!\n");
        return NULL;
    } else if (argc == 4) {
        arg_filename = argv[3];
    }
    main_filename = argv[2];
    flag = argv[1][1];


    switch (flag) {
        case 'o':
            open_exist_file(main_filename, &file);
            break;
        case 'n':
            open_empty_file(main_filename, &file);
            init_file(file);

            break;
        case 'p':
            open_parse_file(arg_filename, &parsable);
            open_empty_file(main_filename, &file);
            init_file(file);
            parse_file(file, parsable);
            break;
        default:
            printf("Unknown flag: -%c", flag);
            return NULL;
    }
    return file;
}

void init_file(FILE *file) {
    printf("Initializing pattern.\nInput the number of fields in pattern: ");
    char *count_str = malloc(INPUT_LINE_SIZE);
    scanf("%s", count_str);
    while (!isNumeric(count_str)) {
        printf("Not-numeric input, try again: ");
        scanf("%s", count_str);
    }
    size_t count = strtol(count_str, NULL, 10);
    char *str;
    char **str_array = malloc_test(count * sizeof(char *));
    char *type = malloc(INPUT_LINE_SIZE);
    uint32_t *types = malloc_test(count * sizeof(uint32_t));
    size_t *sizes = malloc_test(count * sizeof(size_t));
    size_t temp_size;
    for (size_t iter = 0; iter < count; iter++) {
        printf("--- Field %-3zu ---\n", iter);
        str = malloc_test(INPUT_LINE_SIZE);
        printf("Enter field name: ");
        scanf("%s", str);
        str_array[iter] = str;
        temp_size = strlen(str);
        sizes[iter] = temp_size + (!(temp_size % FILE_GRANULARITY) ? 1 : 0);
        printf("%d. Boolean\n", BOOLEAN_TYPE);
        printf("%d. Integer\n", INTEGER_TYPE);
        printf("%d. Float\n", FLOAT_TYPE);
        printf("%d. String\n", STRING_TYPE);
        printf("Choose field type: ");
        scanf("%s", type);
        while (strlen(type) != 1) {
            printf("Incorrect input, try again: ");
            scanf("%s", type);
        }
        types[iter] = strtol(type, NULL, 10);
    }


    init_empty_file(file, str_array, types, count, sizes);

    for (size_t iter = 0; iter < count; iter++) free_test(str_array[iter]);
    free_test(str_array);
    free_test(sizes);
    free_test(types);
    free_test(count_str);
    free_test(type);


}

