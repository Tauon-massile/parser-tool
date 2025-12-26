# 编译器与参数
CC = gcc
CFLAGS = -Wall -g

# 目标程序
TARGET = parser_app

# 源文件
SRCS = main.c parser.c
OBJS = $(SRCS:.c=.o)

# 默认目标：编译可执行文件
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# 编译.c为.o
%.o: %.c parser.h
	$(CC) $(CFLAGS) -c $< -o $@

# 清理编译产物
clean:
	rm -f $(TARGET) $(OBJS) libparser.a libparser.so core.*
