//
//  main.c
//  typedef struct
//
//  Created by 陆敏 on 2019/1/15.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef int num;
num i;

typedef struct Student {
    int age;
    char name[20];
}Stu;

struct Student s1;
Stu s2;



int main(int argc, const char * argv[]) {
    num s;
    s = 10;
    
    s1.age = 10;
    strcpy(s1.name, "abc");
    
    s2.age = 11;
    strcpy(s2.name,"efg");
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
