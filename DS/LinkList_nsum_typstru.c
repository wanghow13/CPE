#include <stdio.h>
#include <stdlib.h>


// 定义链表节点结构和链表类型
typedef struct LNode {
    int data; // 存储节点数据
    struct LNode *next; // 指向下一个节点的指针
} LNode, *LinkList; // 定义 LinkList 类型

// 计算一个给定整数 n 的阶乘
int factorial(int n) {
    if (n == 0 || n == 1) return 1; // 0! 和 1! 都等于 1
    int result = 1; // 初始化结果为 1
    for (int i = 2; i <= n; i++) { // 从 2 乘到 n
        result *= i; // 乘上当前的 i
    }
    return result; // 返回计算得到的阶乘结果
}

// 计算链表 L 中所有节点数据的阶乘和
int FactorialSum(LinkList L) {
    int sum = 0; // 初始化阶乘和为 0
    while (L != NULL) { // 遍历链表
        sum += factorial(L->data); // 将当前节点数据的阶乘加到 sum 中
        L = L->next; // 移动到下一个节点
    }
    return sum; // 返回累加的阶乘和
}

int main() {
    int N, i; // N 用于存储链表的长度，i 是循环变量
    LinkList L, p; // L 是链表头指针，p 是临时节点指针

    scanf("%d", &N); // 读取链表的长度 N
    L = NULL; // 初始化链表为空
    for (i = 0; i < N; i++) { // 循环 N 次构建链表
        p = (LinkList)malloc(sizeof(LNode)); // 分配内存给新节点
        if (p == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1; // 如果内存分配失败，返回错误
        }
        scanf("%d", &p->data); // 读取节点数据
        p->next = L; // 将新节点插入到链表头部
        L = p;
    }
    printf("%d\n", FactorialSum(L)); // 计算链表中所有节点数据的阶乘和并打印结果

    // 释放链表的内存
    while (L != NULL) {
        p = L;
        L = L->next;
        free(p);
    }

    return 0; // 返回 0 表示程序正常结束
}
