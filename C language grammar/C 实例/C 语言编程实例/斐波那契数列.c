//
//  main.c
//  斐波那契数列
//
//  Created by 陆敏 on 2018/3/29.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>
int j,k;
int fibonaci(int i) {
    if (i==0) {
        j++;
        return 0;
    }
    if (i==1) {
        j++;
        return 1;
    }
    k++;
    return fibonaci(i-1)+fibonaci(i-2);
}

int main(int argc, const char * argv[]) {

    int num;
    printf("Please input a integer:");
    scanf("%d",&num);
    for (int i = 0; i<=num; i++) {
        printf("fibonaci(%d) = %d\n",i,fibonaci(i));
    }
    
    printf("j = %d k = %d\n",j,k);
    return 0;
}
