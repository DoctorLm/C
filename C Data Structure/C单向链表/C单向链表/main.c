//
//  main.c
//  C单向链表
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct node)
struct node
{
    int data;
    int age;
    struct node* next;
};
int main(int argc, const char * argv[]){
    struct node *p = NULL,*pl,*head = NULL;
    head = p = (struct node * )malloc(LEN);//第一个节点（头节点）内存123
    p->data = 100;
    p->age = 20;
    pl = p;//P赋值给pl,意在把pl指针拉到第一个节点上，为接受第二个节点分配内存作准备
    p = (struct node * )malloc(LEN);//第二个节点内存456
    p->data = 200;
    p->age = 21;
    pl->next=p;//把p456赋值到第一个节点pl->next
    pl = p;//P赋值给pl,意在把pl指针拉到第二个节点上，为接受第三个节点分配内存作准备
    p = (struct node * )malloc(LEN);//第三个节点内存789
    p->data = 300;
    p->age = 22;
    pl->next=p;//把p789赋值到第二个节点pl->next
    p->next = NULL;//置空第三个节点的next值
    p = head;
    printf("链表数据成员是：\n");
    while (p->next != NULL) {
        printf("data = %d\tage = %d\t\n",p->data,p->age);
        p=p->next;
    }
    printf("data = %d\tage = %d\t\n",p->data,p->age);
    return 0;
}

