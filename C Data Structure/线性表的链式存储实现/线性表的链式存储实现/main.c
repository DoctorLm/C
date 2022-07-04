//
//  main.c
//  线性表的链式存储实现
//
//  Created by 陆敏 on 2019/3/3.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int ElementType;
typedef struct LNode *List;
struct LNode {
    ElementType Data;
    List Next;
};
/*--------------------------------*/
typedef int DataType;
typedef struct Node {
    DataType Data;
    struct Node *next;
}Node;
/*--------------------------------*/
Node *getPtr(Node *head, int pos);//查找获取指定位置的元素
int getSize(Node *head);//求单向链表长度
bool insert(Node **head, int position, DataType d);//插入
bool delNode(Node **head, int pos);//删除
void uNion(Node *a, Node *b);//线性表合并
void reverse(Node **head);//线性表倒置
void print(DataType d);
void add(DataType d);
void trave(Node *head, void(*fun)(DataType));
//---------------------------------
int getsize(Node *rear);//求单盾环链表长度
Node *getptr(Node *rear, int pos);//查找获取单循环链表指定位置的元素
bool insertRear(Node **rear, int postion, DataType d);

/*--------------------------------*/
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
    Node *rear = NULL;
    insertRear(&rear, 0, 10);
    int len = getsize(rear);
    Node *p = getptr(rear, 0);
    printf("%d %d\n",len,p->Data);
/*------------------------------------------*/
    Node *head = NULL;
    insert(&head, 0, 10);
    insert(&head, 0, 11);
    insert(&head, 0, 12);
    insert(&head, 0, 13);
    trave(head, print); //插入前
    printf("\n");
    getSize(head);
    delNode(&head, 0); //删除下标为3的一个元素
    trave(head, print); //删除后
    printf("\n");
    reverse(&head); //返转
    trave(head, print);//翻转后
    printf("\n");
    trave(head, add);//翻转后
    printf("\n");

//    /*--------------------*/
    Node *aHead;
    insert(&aHead, 0, 10);
    insert(&aHead, 0, 3);
    insert(&aHead, 0, 8);
    insert(&aHead, 0, 5);
    Node *bHead;
    insert(&bHead, 0, 7);
    insert(&bHead, 0, 1);
    insert(&bHead, 0, 9);
    uNion(aHead, bHead);
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
/*------------单向链表------------------*/
Node *getPtr(Node *head, int pos) {
    Node *p = head;
    if (p == NULL || pos == 0) {
        return head;
    }
    for (int i=0; p && i < pos; i++) {
        p = p->next;
    }
    return p;
}
int getSize(Node *head) {
    int size = 0;
    Node *p = head;
    while (p) {
        size++;
        p = p->next;
    }
    return size;
}
bool insert(Node **head, int position, DataType d) {
    if (position < 0 || position > getSize(*head)) {
        return false;
    }
    Node *node = (Node*)malloc(sizeof(Node));
    node->Data = d;
    node->next = NULL;
    if (position == 0) {
        node->next = *head;
        *head = node;
        return true;
    }
    Node *p = getPtr(*head, position-1);
    Node *r = p->next;
    node->next = r;
    p->next = node;
    return true;
}
bool delNode(Node **head, int pos) {
    if (pos < 0 || pos >= getSize(*head)) {
        return false;
    }
    Node *p = *head;
    if (pos == 0) {
        *head = (*head)->next;
        free(p);
        p = NULL;
        return true;
    }
    p = getPtr(*head, pos-1);
    Node *q = p->next;
    p->next = q->next;
    free(q);
    q = NULL;
    return true;
}
void uNion(Node *a, Node *b) {
    Node *p = a;
    while (p->next) {
        p = p->next;
    }
    p->next = b;
}
void reverse(Node **head) {
    Node *p = *head;
    Node *q = p->next;
    if (q == NULL) {
        return;
    }
    Node *r = q->next;
    if (p == *head) {
        p->next = NULL;
    }
    while (true) {
        q->next = p;
        if (r == NULL) {
            *head = q;
            break;
        }else {
            p = q;
            q = r;
            r = r->next;
        }
    }
}
void print(DataType d) {
    printf("%d ",d);
}
void add(DataType d) {
    static int s;
    s += d + 10;
    printf("%d\n",s);
}
void trave(Node *head, void(*fun)(DataType)){
    Node *p = head;
    while (p) {
        fun(p->Data);
        p = p->next;
    }
}
/*-------------单向循环链表---------------*/
int getsize(Node *rear) {
    int size = 0;
    if (rear) {
        Node *p = rear->next;
        while (p != rear) {
            size++;
            p = p->next;
        }
        size++;
    }
    return size;
}
Node *getptr(Node *rear, int pos) {
    if (rear == NULL) {
        return rear;
    }
    if (pos >= getsize(rear)) {
        return NULL;
    }
    Node *p = rear->next;
    for (int i=0; i<pos; i++) {
        p = p->next;
    }
    return p;
}
bool insertRear(Node **rear, int postion, DataType d) {
    if (postion < 0 || postion > getsize(*rear)) {
        return false;
    }
    Node *node = (Node*)malloc(sizeof(Node));
    node->Data = d;
    node->next = NULL;
    if (postion == 0) {
        if (*rear == NULL) {
            node->next = node;
            *rear = node;
        }else {
            node->next = (*rear)->next;
            (*rear)->next = node;
        }
        return true;
    }
    Node *p = getptr(*rear, postion-1);
    Node *r = p->next;
    node->next = r;
    p->next = node;
    if (*rear == p) {
        *rear = node;
    }
    return true;
}
