#include "parser.h"
#include <string.h>

// 实现字符串长度统计
int parse_strlen(const char *str) {
    if (str == NULL) {
        return -1;
    }
    return strlen(str);
}
