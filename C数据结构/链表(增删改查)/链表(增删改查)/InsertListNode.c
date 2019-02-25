//
//  InsertListNode.c
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include "InsertListNode.h"

void list_add_front(struct student **header,struct student* node){
    node->next = *header;
    *header = node;
}
void list_add_tail(struct student **header, struct student* node){
    struct student **walk = header;
    while (*walk) {
        walk = &((*walk)->next);
    }
    *walk = node;
}
