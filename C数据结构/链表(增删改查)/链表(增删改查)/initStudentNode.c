//
//  initStudentNode.c
//  链表(增删改查)
//
//  Created by 陆敏 on 2018/3/20.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include "initStudentNode.h"
void init_student_node(struct student* node,char* name,int age,char* sex,int cls,int greade){
    strcpy(node->name, name);
    node->age = age;
    strcpy(node->sex, sex);
    node->cls = cls;
    node->grade = greade;
}
