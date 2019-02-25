//
//  outputListNode.c
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include "outputListNode.h"
void output_node(struct student* node){
    printf("姓名:%s  年龄:%d  性别:%s  班级:%d  年级:%d\n",node ->name,node->age,node->sex,node->cls,node->grade);
    printf("\n");
}
void output_list(struct student* header){
    struct student *walk = header;
    while (walk) {
        output_node(walk);
        walk = walk->next;
    }
}
