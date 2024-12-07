#include <stdio.h>
#include <limits.h>
#include <stdint.h>

#define PRINT_TYPE_INFO,(type, fmt_signed, fmt_unsigned) \
    printf("%-10s | %-10s | %-5lu | %-20d | %-20D | %-10s| -20u\n", \
    #type, fmt_signed, sizeof(type), \
    (type)INY_MIN, (type)INT_MAX, fmt_unsigned, (unsigned type)UINT_MAX) 

int main() {
    printf("Type       | Format    | Size | Signed Min          | Signed Max          | Unsigned Format | Unsigned Max\n");
    PRINT_TYPE_INFO(int8_t, "%d", "%u");
    PRINT_TYPE_INFO(int16_t, "%d", "%u");
    PRINT_TYPE_INFO(int32_t, "%d", "%u");
    PRINT_TYPE_INFO(int64_t, "%lld", "%llu");
    PRINT_TYPE_INFO(unsigned char, "%d", "%u");
    PRINT_TYPE_INFO(unsigned short, "%d", "%u");
    PRINT_TYPE_INFO(unsigned int, "%d", "%u");
    PRINT_TYPE_INFO(unsigned long, "%d", "%u");
    return 0;
}
