#include <stdio.h>

// 在feature分支中添加新功能
int subtract(int a, int b) {
    return a - b;
}

// Student2添加了multiply函数（与Student1修改了相同位置）
int multiply(int a, int b) {
    return a * b;
}

int main() {
    printf("Hello, World!\n");
    int result = subtract(10, 3);
    printf("10 - 3 = %d\n", result);
    int mul_result = multiply(5, 6);
    printf("5 * 6 = %d\n", mul_result);
    return 0;
}