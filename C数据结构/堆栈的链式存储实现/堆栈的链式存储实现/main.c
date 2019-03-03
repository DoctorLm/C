//
//  main.c
//  堆栈的链式存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct SNode *Stack;
struct SNode {
    ElementType Data;
    struct SNode *next;
};
Stack CreateStack(void);
int IsEmpty(Stack S);
void Push(ElementType item, Stack S);
ElementType Pop(Stack S);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
Stack Createstack(){
    /*构建一个堆栈的头结点，返回指针*/
    Stack S;
    S = (Stack)malloc(sizeof(struct SNode));
    S->next = NULL;
    return S;
}
int IsEmpty(Stack S){
    /*判断堆栈S是否为空，若为空函数返回整数1,否则返回0*/
    return S->next == NULL;
}
void Push(ElementType item, Stack S){
    /*将元素item压入堆栈S*/
    struct SNode *TmpCell;
    TmpCell = (struct SNode*)malloc(sizeof(struct SNode));
    TmpCell->Data = item;
    TmpCell->next = S->next;
    S->next = TmpCell;
}
ElementType Pop(Stack S){
    struct SNode *FirstCell;
    ElementType TopElem;
    if (IsEmpty(S)) {
        printf("堆栈空");
        return NULL;
    }else {
        FirstCell = S->next;
        S->next = FirstCell->next;
        TopElem = FirstCell->Data;
        free(FirstCell);
        return TopElem;
    }
}
