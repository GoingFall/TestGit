#include <stdio.h>

// 添加一个计算函数
int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello, World!\n");
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    return 0;
}