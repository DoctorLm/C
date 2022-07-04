//
//  main.c
//  二叉树
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#define ElementType int
#define MAX 100
typedef struct TreeNode *BinTree;
struct TreeNode{ //树的节点
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

typedef struct { //队列存储树节点
    int front, rear;
    BinTree * data[MAX];
} Queue;
void initQueue (Queue *q) { //初始化队列
    q->rear=0;
    q->front=0;
}
void levelOrderTraversal(BinTree BT) {
}

/*先序*/
void perOrderTraversal(BinTree BT) {
    if (BT) {
        printf("%d", BT->Data);
        perOrderTraversal(BT->Left);
        perOrderTraversal(BT->Right);
    }
}
/*中序递归遍历算法*/
void inOrderTraversal(BinTree BT) {
    if (BT) {
        perOrderTraversal(BT->Left);
        printf("%d", BT->Data);
        perOrderTraversal(BT->Right);
    }
}
/*中序非递归遍历堆栈算法*/

/*后序*/
void postOrderTraversal(BinTree BT) {
    if (BT) {
        perOrderTraversal(BT->Left);
        perOrderTraversal(BT->Right);
        printf("%d", BT->Data);
    }
}

int main(int argc, const char * argv[]) {
    
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
