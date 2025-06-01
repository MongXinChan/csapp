#include <stdio.h>

// 定义 byte_pointer 类型
typedef unsigned char *byte_pointer;

// show_bytes 函数定义
void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]); // 以十六进制格式打印每个字节
    }
    printf("\n");
}

int main() {
    short x = 12345;
    short mx = -x;

    printf("Bytes for x (12345):\n");
    show_bytes((byte_pointer) &x, sizeof(short));

    printf("Bytes for mx (-12345):\n");
    show_bytes((byte_pointer) &mx, sizeof(short));

    return 0;
}