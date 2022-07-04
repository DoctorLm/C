//
//  main.c
//  指针链表
//
//  Created by 陆敏 on 2019/2/18.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct data {
    int number;
    struct data *next;
};

struct data *insert(struct data *head,int number) {
    struct data *p,*q1,*q2 = NULL;
    p = (struct data*)malloc(sizeof(struct data));
    p->number = number;
    p->next = NULL;
    if (head == NULL) {
        head = p;
    } else {
        q1 = head;
        if (number < q1->number) {
            head = p;
            head->next = q1;
        } else {
            while (number > q1->number && q1->next != NULL) {
                q2 = q1;
                q1 = q1->next;
            }
            if (number < q1->number) {
                q2->next = p;
                p->next = q1;
            }
            else {
                q1->next = p;
            }
        }
    }
    return head;
}
struct data *del(struct data *head, int number) {
    struct data *q1,*q2 = NULL;
    q1 = head;
    if (number == q1->number) {
        head = q1->next;
        free(q1);
    } else {
        while (number != q1->number && q1->next != NULL) {
            q2 = q1;
            q1 = q1->next;
        }
        if (number == q1->number) {
            q2->next = q1->next;
            free(q1);
        }
    }
    return head;
}
struct data *del_all(struct data *head) {
    struct data *q;
    while (head != NULL) {
        q = head;
        head = q->next;
        free(q);
    }
    return NULL;
}
void print(struct data *head) {
    struct data *q;
    q = head;
    while (q != NULL) {
        printf("%d  ",q->number);
        q = q->next;
    }
    printf("\n");
}
int main(int argc, const char * argv[]) {
    struct data *head = NULL;
    head = insert(head, 5);
    head = insert(head, 3);
    head = insert(head, 9);
    head = insert(head, 4);
    head = insert(head, 7);
    print(head);
    head = del(head, 3);
    print(head);
    head = del_all(head);
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
