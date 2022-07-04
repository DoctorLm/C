//
//  dynamicAllocMemory.h
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#ifndef dynamicAllocMemory_h
#define dynamicAllocMemory_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Defining chain table nodes
struct student {
    char name[64];
    int age;              /*数据成员可以是多个不同类型的数据*/
    char sex[6];
    int cls;
    int grade;
    struct  student  *next;      /*指针变量成员只能是-个*/
};
struct student* alloc_node(void);
#endif /* dynamicAllocMemory_h */
