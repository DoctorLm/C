//
//  main.c
//  指针访问二维数组
//
//  Created by 陆敏 on 2018/3/26.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int array[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[2][3] = NULL;
    p = &array;
    /*
     array[0][0]
     *p == array
     (*p)[0][0]
     p[0] == *p
     p[0][0][0] == array[0][0]
     p[0] == array
     p[0][0] == array[0] == *(p[0] + 0) == arr1
     p + 1 跨过 6*4个字节
     p[0] + 1 跨过 3*4字节
     p[0][0] + 1 跨过 4字节
     p[0][0][0] + 1 二维数组第一个元素值+1
     */
    printf("p = %u\n",p);
    printf("p+1 = %u\n",p+1);
    
    printf("p[0] = %u\n",p[0]);
    printf("p[0] + 1 = %u\n",p[0] + 1);
    
    printf("p[0][0] = %u\n",p[0][0]);
    printf("p[0][0] + 1 = %u\n",p[0][0] + 1);
    
    printf("p[0][0][0] = %d\n",p[0][0][0]);
    printf("p[0][0][0] + 1 = %d\n",p[0][0][0] + 1);
    return 0;
}
