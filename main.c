#include <stdio.h>

// 在feature分支中添加新功能
int subtract(int a, int b) {
    return a - b;
}

// Student2添加了multiply函数
int multiply(int a, int b) {
    return a * b;
}

// Student1添加了divide函数
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}

int main() {
    printf("Hello, World!\n");
    int result = subtract(10, 3);
    printf("10 - 3 = %d\n", result);
    int mul_result = multiply(5, 6);
    printf("5 * 6 = %d\n", mul_result);
    int div_result = divide(20, 4);
    printf("20 / 4 = %d\n", div_result);
    return 0;
}
