#include <stdio.h>
#include <stdlib.h>

// 定义单链表的结点结构和链表类型
typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

// 计算一个给定整数 n 的阶乘
int factorial(int n) {
    if (n == 0 || n == 1) return 1; // 0! 和 1! 都等于 1
    int result = 1; // 初始化结果为 1
    for (int i = 2; i <= n; i++) { // 从 2 乘到 n
        result *= i; // 乘上当前的 i
    }
    return result; // 返回计算得到的阶乘结果
}

// 计算链表 L 中所有结点数据的阶乘和
int FactorialSum(List L) {
    int sum = 0; // 初始化阶乘和为 0
    while (L != NULL) { // 遍历链表
        sum += factorial(L->Data); // 将当前结点数据的阶乘加到 sum 中
        L = L->Next; // 移动到下一个结点
    }
    return sum; // 返回累加的阶乘和
}

int main()
{
    int N, i; // N 用于存储链表的长度，i 是循环变量
    List L, p; // L 是链表头指针，p 是临时结点指针

    scanf("%d", &N); // 读取链表的长度 N
    L = NULL; // 初始化链表为空
    for ( i=0; i<N; i++ ) { // 循环 N 次构建链表
        p = (List)malloc(sizeof(struct Node)); // 分配内存给新结点
        scanf("%d", &p->Data); // 读取结点数据
        p->Next = L;  L = p; // 将新结点插入到链表头部
    }
    printf("%d\n", FactorialSum(L)); // 计算链表中所有结点数据的阶乘和并打印结果

    return 0; // 返回 0 表示程序正常结束
}

 typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;