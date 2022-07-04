//
//  main.c
//  指针函数
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
void showMessage(void (*p)(void)){
    printf("内容由调用者指定\n");
    p();
}
void showFunc(){
    printf("今天星期五，明天不上班...\n");
}
int mySortFunc(int a,int b){
    if (a<b) {
        return 1;
    }else{
        return -1;
    }
}
void printArray(int array[],int nLength){
    int i;
    for (i=0; i<nLength; i++) {
        printf("%d ",*(array+i));
        
    }
}
void sortArrayFunc(int array[],int nLength,int (*sortfunc)(int a,int b)){
    int i,j,temp;
    for (i=1; i<=nLength; i++) {
        for (j=0; j<nLength-i; j++) {
            if (sortfunc(array[j],array[j+1]) > 0) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    showMessage(showFunc);
    int array[10] = {2,6,9,4,7,5,1,8,0,3};
    sortArrayFunc(array, 10, mySortFunc);
    printArray(array, 10);
    printf("\n");
    for (int i = 9; i>=0; i--) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
