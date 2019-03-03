//
//  main.c
//  线性表的链式存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef struct LNode *List;
struct LNode {
    ElementType Data;
    List Next;
};
struct LNode L;
List PtrL;
/*求长度*/
int Length(List PtrL) {
    List p = PtrL; /*p 指向表的第一个结点*/
    int j = 0;
    while (p) {
        p = p->Next;
        j++; /*当前 p 指向的是第 j 个结点*/
    }
    return j;
}
/* 查找 */
/* 1 按序号查找 */
List FindKth(int K, List PtrL) {
    List p = PtrL;
    int i = 1;
    while (p != NULL && i < K) {
        p = p->Next;
        i++;
    }
    if (i == K) {
        return p;
    }else {
        return NULL;
    }
}
/* 2 按值查找 */
List Find(ElementType X, List Ptrl) {
    List p = Ptrl;
    while (p != NULL && p->Data != X) {
        p = p->Next;
    }
    return p;
}
/* 插入操作实现 */
List Insert(ElementType X, int i, List PtrL) {
    List p,s;
    if (i ==1) {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = PtrL;
        return s;
    }
    p = FindKth(i-1, PtrL);
    if (p == NULL) {
        printf("参数i错");
        return NULL;
    }else {
        s = (List)malloc(sizeof(struct LNode));
        s->Data = X;
        s->Next = p->Next;
        p->Next = s;
        return PtrL;
    }
}
/* 删除操作实现*/
List Delete(int i, List PtrL) {
    List p,s;
    if (i == 1) {
        s = PtrL;
        if (PtrL != NULL) {
            PtrL = PtrL->Next;
        }else {
            return NULL;
        }
        free(s);
        return PtrL;
    }
    p = FindKth(i-1, PtrL);
    if (p == NULL) {
        printf("第%d个结点不存在",i-1);
        return NULL;
    }else if (p->Next == NULL) {
        printf("第%d个结点不存在",i);
        return NULL;
    }else {
        s = p->Next;
        p->Next = s->Next;
        free(s);
        return PtrL;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
