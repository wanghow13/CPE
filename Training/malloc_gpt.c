#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int* a;
    int i;
    
    printf("输入数量：");
    fflush(stdout);  // 强制刷新输出缓冲区
    scanf("%d", &number);
    
    // 动态分配内存，并检查内存是否分配成功
    a = (int*)malloc(number * sizeof(int));
    if (a == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    
    printf("请输入 %d 个数字：\n", number);
    fflush(stdout);  // 强制刷新输出缓冲区
    
    // 读取输入的整数
    for (i = 0; i < number; i++) {
        scanf("%d", &a[i]);
    }
    
    // 从后往前输出整数
    printf("反向输出数字：\n");
    fflush(stdout);  // 强制刷新输出缓冲区
    
    for (i = number - 1; i >= 0; i--) {
        printf("%d ", a[i]);  // 改为输出 a[i]
    }
    printf("\n");
    
    // 释放动态分配的内存
    free(a);
    
    return 0;
}
