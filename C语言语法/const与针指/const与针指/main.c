//
//  main.c
//  const与针指
//
//  Created by 陆敏 on 2019/2/8.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 19;
    const int* p;
    int const* p1;
    //*左边，修饰的是指针指向的-变量-不可以被修改
    //它可以修改指向
    p = &a;
    //其指向的内存被const修饰，不能修改
    //*p = 20;
    
    //*右边const，修饰指针变量本身,指向不可变
    int* const p2 = &a;
    //p2 = &a;
    //可以修改所指向内存的值
    *p2 = 10;
    
    //*两边都有const 指向与值均不可变
    const int* const p3 = &a;
    //*p3 = 10;
    //p3 = &a;
    
    
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
