#include <stdio.h>

// 在feature分支中添加新功能
int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("Hello, World!\n");
    int result = subtract(10, 3);
    printf("10 - 3 = %d\n", result);
    return 0;
}