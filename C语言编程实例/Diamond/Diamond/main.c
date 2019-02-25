//
//  main.c
//  Diamond
//
//  Created by 陆敏 on 2018/3/26.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>
void diamond(int row){
    int i,j,k = 0;
    for (i=0; i<row; i++) {
        if (i<row/2) {
            for (j=row/2+1+k; j>0; j--) {
                if (j<2+k*2) {
                    printf(".");
                }else{
                    printf(" ");
                }
            }
            k++;
            printf("\n");
        }else{
            for (j=row/2+1+k; j>0; j--) {
                if (j<2+k*2) {
                    printf(".");
                }else{
                    printf(" ");
                }
            }
            k--;
            printf("\n");
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    diamond(21);
    return 0;
}
