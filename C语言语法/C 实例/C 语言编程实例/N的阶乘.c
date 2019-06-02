//
//  main.c
//  N的阶乘
//
//  Created by 陆敏 on 2019/2/2.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
int j,k;
int Function(int n) {
    if (n == 0) {
        printf("%d",j++);
        return 1;
    }else{
        k++;
        return n*Function(n-1);
    }
}
int main(int argc, const char * argv[]) {
    int i;
    printf("Please input a integer:");
    scanf("%d",&i);
    printf("%d! = %d\n",i,Function(i));
    printf("j = %d k = %d\n",j,k);
    return 0;
}
