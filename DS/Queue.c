void Levelorder(BiTree T) {
    int f = 0, r = 0;  // f表示队头，r表示队尾
    BiTree q[100];   // 模拟队列
    BiTree p;           // p指向当前访问的结点

    if (T) {            // 如果二叉树非空，根结点地址入队
        q[r] = T;
        r++;
    }
    while (f != r) {    // 队列不为空时，进行遍历
        p = q[f];       // 访问队头结点
        f++;
        printf(" %c", p->data);  // 访问当前结点的数据域
        if (p->lchild) {  // 左子树非空，左孩子入队
            q[r] = p->lchild;
            r++;
        }
        if (p->rchild) {  // 右子树非空，右孩子入队
            q[r] = p->rchild;
            r++;
        }
    }
}
