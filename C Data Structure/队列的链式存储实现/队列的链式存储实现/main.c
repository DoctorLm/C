//
//  main.c
//  队列的链式存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
struct Node {
    ElementType Data;
    struct Node *Next;
};
struct QNode { /*链队列结构*/
    struct Node *rear; /*指向队尾结点*/
    struct Node *front; /*指向队头结点*/
};
typedef struct QNode *Queue;
Queue PtrQ;

ElementType DeleteQ(Queue PtrQ); /*出队操作*/
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
ElementType DeleteQ(Queue PtrQ){
    struct Node *FrontCell;
    ElementType FrontElem;
    if (PtrQ->front == NULL) {
        printf("队列空");
        return -1;
    }
    FrontCell = PtrQ->front;
    if (PtrQ->front == PtrQ->rear) { /*若队列只有一个元素*/
        PtrQ->front = PtrQ->rear = NULL; /*删除后队列置为空*/
    }else {
        PtrQ->front = PtrQ->front->Next;
    }
    FrontElem = FrontCell->Data;
    free(FrontCell); /*释放被删除结点空间*/
    return FrontElem;
}
