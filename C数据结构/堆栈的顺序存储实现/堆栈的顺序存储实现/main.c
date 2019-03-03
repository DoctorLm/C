//
//  main.c
//  堆栈的顺序存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#define MaxSize 100
typedef int ElementType;
typedef struct sNode *Stack;
struct sNode {
    ElementType Data[MaxSize];
    int Top;
};

Stack CreateStack(int maxSize);//生成空堆栈,其最大长度为maxSize

int IsFull(Stack PtrS,int maxSize);//判断堆栈PtrS是否己满

void Push(Stack PtrS, ElementType item);//将元素item压入堆栈(入栈)

int IsEmpty(Stack PtrS);//判断堆栈PtrS是否为空

ElementType Pop(Stack PtrS);//删除并返回栈顶元素(出栈)


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

/*入栈操作*/
void Push(Stack PtrS, ElementType item) {
    if (PtrS->Top == MaxSize - 1) {
        printf("堆栈满...");
        return;
    }else {
        PtrS->Data[++(PtrS->Top)] = item;
        return;
    }
}
/*出栈操作*/
ElementType Pop(Stack PtrS) {
    if (PtrS->Top == -1) {
        printf("堆栈已空...");
        return -1;
    }else {
        return PtrS->Data[PtrS->Top--];
    }
}
