//
//  delListNode.c
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include "delListNode.h"
void free_node(struct student* node){
    printf("free %p\n",node);
    free(node);
}
void list_del(struct student** header,struct student* node){
    struct student** walk;
    walk = header;
    while (*walk) {
        if (*walk == node) {
            *walk = node->next;
            node->next = NULL;
            return;
        }
        walk = &(*walk)->next;
    }
    printf("Warning this node %p is not in this list\n",node);
}
void list_del_all(struct student** header){
    while (*header) {
        struct student* student;
        student = *header;
        *header = (*student).next;
        student->next = NULL;
        free_node(student);
    }
    *header = NULL;
}
