#include "parser.h"
#include <string.h>

// 实现字符串长度统计
int parse_strlen(const char *str) {
    if (str == NULL) {
        return -1;
    }
    return strlen(str);
}

// 行统计功能
int count_lines(const char *filename) {
    if (filename == NULL) {
        return -1;
    }
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return -2;
    }
    int lines = 0;
    char buf[1024];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        lines++;
    }
    fclose(fp);
    return lines;
}
