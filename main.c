#include "parser.h"
#include <stdio.h>

int main() {
    const char *test_str = "Linux Final Project 2025";
    int len = parse_strlen(test_str);
    printf("字符串长度：%d\n", len);
    
    // 分支功能：行统计
    int lines = count_lines("test.txt");
    printf("文件行数：%d\n", lines);
    
    return 0;
}
