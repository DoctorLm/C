//
//  delListNode.h
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#ifndef delListNode_h
#define delListNode_h

#include "dynamicAllocMemory.h"
#include <stdio.h>
void free_node(struct student* node);
void list_del(struct student** header,struct student* node);
void list_del_all(struct student** header);
#endif /* delListNode_h */
