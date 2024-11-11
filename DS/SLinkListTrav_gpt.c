#include <stdio.h>
#include <stdlib.h> // 需要包含这个头文件以使用malloc

typedef struct LNode { // 确保结构体定义正确
    int data;
    struct LNode *next; // 注意这里应该是struct LNode *
} LNode, *LinkList; // typedef 给 LNode 指针类型起个别名 LinkList

LinkList Create();
void Traverse(LinkList L);

int main(int argc, char const *argv[]) {
    LinkList L = Create(); // 需要保存 Create 的返回值
    Traverse(L); // 调用 Traverse 打印链表
    return 0;
}

LinkList Create() {
    LinkList head, trail; // 使用 LinkList 类型
    head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL; // 头指针初始化
    trail = head; // 用于保存链表的尾指针

    int value;
    while (1) {
        scanf("%d", &value);
        if (value == -1) break; // 输入 -1 结束
        LinkList newNode = (LinkList)malloc(sizeof(LNode));
        newNode->data = value;
        newNode->next = NULL; // 修正为 NULL
        trail->next = newNode; // 将新节点添加到链表
        trail = newNode; // 更新尾节点
    }
    return head; // 返回头节点
}

void Traverse(LinkList L) {
    LinkList p = L->next; // 跳过头节点
    while (p != NULL) { // 修正条件
        printf("%d ", p->data); // 输出数据并加空格
        p = p->next; // 移动到下一个节点
    }
    printf("\n"); // 输出换行
}
