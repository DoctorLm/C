//
//  main.c
//  线性表的顺序存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
typedef struct LNode *List;
typedef int ElementType;
struct LNode {
    ElementType Data[MAXSIZE];
    int Last;
};
struct LNode L;
List PtrL;
List MakeEmpty() {
    List PtrL;
    PtrL = (List)malloc(sizeof(struct LNode));
    PtrL->Last = -1;
    return PtrL;
}
int Find(ElementType X,List PtrL) {
    int i = 0;
    while (i <= PtrL->Last && PtrL->Data[i] != X) {
        i++;
    }
    if (i > PtrL->Last) {
        return -1;
    }else {
        return i;
    }
}
void Insert(ElementType X, int i, List PtrL) {
    int j;
    if (PtrL->Last == MAXSIZE-1) { /*表空间己满，不能插入*/
        printf("表满");
        return;
    }
    if (i < 1 || i > PtrL->Last + 2) {
        printf("位置不合法");
        return;
    }
    for (j = PtrL->Last; j>=i-1; j--) {
        PtrL->Data[j+1] = PtrL->Data[j]; /*将 ai~an 倒序向后移动*/
    }
    PtrL->Data[i-1] = X; /*新元素插入*/
    PtrL->Last++; /*Last仍指向最后元素*/
    return;
}
void Delete(int i,List PtrL) {
    int j;
    if (i < 1 || i > PtrL->Last+1) {
        printf("不存在第%d个元素",i);
        return;
    }
    for (j = i; j >= PtrL->Last; j++) {
        PtrL->Data[j-1] = PtrL->Data[j]; /*将a[i+1]~a[i]顺序向前移动*/
    }
    PtrL->Last--; /*Last仍指向最后元素*/
    return;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
