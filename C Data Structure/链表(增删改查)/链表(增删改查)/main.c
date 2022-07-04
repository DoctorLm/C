//
//  main.c
//  链表(增删改查)
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynamicAllocMemory.h"
#include "InsertListNode.h"
#include "outputListNode.h"
#include "initStudentNode.h"
#include "delListNode.h"

int main(int argc, const char * argv[]) {
    struct student *student_set_header = NULL;
    struct student *node;
    node = alloc_node();
    list_add_front(&student_set_header,node);
    init_student_node(node, "Lumin0", 10, "男", 2,18);
    node = alloc_node();
    list_add_front(&student_set_header,node);
    init_student_node(node, "Lumin1", 11, "男", 3,17);
    node = alloc_node();
    list_add_front(&student_set_header,node);
    init_student_node(node, "Lumin2", 12, "男", 4,16);
    list_del(&student_set_header, node);
    node = alloc_node();
    list_add_tail(&student_set_header,node);
    init_student_node(node, "Lumin3", 14, "男", 5,15);
    node = alloc_node();
    list_add_tail(&student_set_header,node);
    init_student_node(node, "Lumin4", 15, "男",6,14);
    node = alloc_node();
    list_add_tail(&student_set_header,node);
    init_student_node(node, "Lumin5", 16, "男",7,12);
    list_del(&student_set_header, node);
    output_list(student_set_header);
    list_del_all(&student_set_header);
    return 0;
}
