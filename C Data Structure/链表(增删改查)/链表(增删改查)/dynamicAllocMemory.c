//
//  dynamicAllocMemory.c
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include "dynamicAllocMemory.h"

//Dynamically allocated memory
struct student* alloc_node(){
    struct student* n = malloc(sizeof(struct student));
    memset(n, 0, sizeof(struct student));
    printf("分配的内存地址: %p\n",n);
    return n;
}
