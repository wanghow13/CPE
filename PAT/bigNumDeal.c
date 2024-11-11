#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 3000  // 用来存储结果的数组大小，1000! 的位数上限大约是 2568 位

void Print_Factorial(const int N);

int main() {
    int N;
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

void Print_Factorial(const int N) {
    if (N < 0) {
        printf("Invalid input\n");
        return;
    }

    int result[MAX_DIGITS];  // 用来存储阶乘结果的数组
    memset(result, 0, sizeof(result));
    result[0] = 1;  // 初始值 1! = 1
    int result_size = 1;  // 当前结果的有效位数

    // 逐个计算阶乘 2 到 N
    for (int i = 2; i <= N; i++) {
        int carry = 0;  // 用来存储进位
        for (int j = 0; j < result_size; j++) {
            int prod = result[j] * i + carry;  // 当前位的乘积加上进位
            result[j] = prod % 10;  // 取余数作为当前位
            carry = prod / 10;  // 更新进位
        }

        // 处理进位
        while (carry) {
            result[result_size] = carry % 10;
            carry /= 10;
            result_size++;
        }
    }

    // 从高位到低位打印结果
    for (int i = result_size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}
