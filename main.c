#include <stdio.h>

// 添加一个计算函数
int add(int a, int b) {
    return a + b;
}

// 添加一个乘法函数
int multiply(int a, int b) {
    return a * b;
}

int main() {
    printf("Hello, World!\n");
    int sum = add(5, 3);
    int product = multiply(4, 6);
    printf("5 + 3 = %d\n", sum);
    printf("4 * 6 = %d\n", product);
    return 0;
}