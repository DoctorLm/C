//
//  main.c
//  函数递归求一个正整数的二进制格式
//
//  Created by 陆敏 on 2019/2/10.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
void binary(int a){
    if (a >= 2) {
        binary(a/2);
        printf("%d",a%2);
    }else {
        if (a != 0) {
            printf("\n%d",a);
        }else {
            printf("\n");
        }
    }
}
int main(int argc, const char * argv[]) {
    int i;
    printf("Please input a integer:");
    scanf("%d",&i);
    binary(i);
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
