# 定义编译器
CC = gcc

# 定义编译选项
CFLAGS = -Wall -g

# 定义链接选项
LDFLAGS =

# 定义要编译的源文件
SRC = $(wildcard *.c)

# 从源文件列表生成目标文件列表
OBJ = $(SRC:.c=.o)

# 定义最终生成的可执行文件名
TARGET = myprogram

# 默认目标
all: $(TARGET)

# 链接目标
$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

# 从 .c 文件编译 .o 文件的规则
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理编译生成的文件
clean:
	rm -f $(OBJ) $(TARGET)

# 防止 make 根据文件名自动生成规则
.PHONY: all clean
