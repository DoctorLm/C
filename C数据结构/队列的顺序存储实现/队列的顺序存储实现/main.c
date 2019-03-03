//
//  main.c
//  队列的顺序存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#define MaxSize 6
typedef int ElementType;
typedef struct QNode *Queue;
struct QNode {
    ElementType Data[MaxSize];
    int rear;
    int front;
};
Queue CreatQueue(int maxSize); //生成长度为MaxSize的空队列
int IsFullQ(Queue Q,int maxSize); //判断队列Q是否己满
void addQ(Queue Q,ElementType item); //将数据元素item插入队列Q中
int IsEmptyQ(Queue Q); //判断队列Q是否为空
ElementType DeleteQ(Queue Q); //将队头数据元素从队列中删除并返回

int main(int argc, const char * argv[]) {
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
void addQ(Queue Q,ElementType item) {
    if ((Q->rear+1) % MaxSize == Q->front) {
        printf("队列满");
        return;
    }
    Q->rear = (Q->rear+1)%MaxSize;
    Q->Data[Q->rear] = item;
}
ElementType DeleteQ(Queue Q) {
    if (Q->front == Q->rear) {
        printf("空队列");
        return -1;
    }else {
        Q->front = (Q->front+1) % MaxSize;
        return Q->Data[Q->front];
    }
}
