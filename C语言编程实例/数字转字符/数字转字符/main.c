//
//  main.c
//  数字转字符
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* getString(int data, char* buff){
    int i = 0;
    sprintf(buff, "%d",data);
    if (strlen(buff) == 1 ) {
        buff[3] = buff[0];
        for (i = 0; i < 3; i++) {
            buff[i] = '0';
        }
    }
    else if (strlen(buff) == 2){
        buff[3] = buff[1];
        buff[2] = buff[0];
        for (i = 0; i < 2; i++) {
            buff[i] = '0';
        }
    }
    else if (strlen(buff) == 3){
        for (i=3; i>0; i--) {
            buff[i] = buff[i-1];
        }
        buff[0] = '0';
    }
    return buff;
}
char* getFilename(char* filename,int index,char* prefix, char* postfix){
    int i = 0,j = 0,k = 0;
    char buff[5] = "\0";
    getString(index, buff);
    for (i = 0;i<strlen(prefix);i++){
        filename[i] = prefix[i];
    }
    j = i;
    for (j = 0;j<strlen(buff);j++,i++){
        filename[i] = buff[j];
    }
    k = i;
    for (k = 0;k<strlen(postfix);k++,i++){
        filename[i] = postfix[k];
    }
    return filename;
}
int main(int argc, const char * argv[]) {
    int i = 0;
    char filename[20] = "\0";
    char* prefix = "Tank";
    char* postfix = ".jpg";
    for (i = 0; i<1000; i++) {
        getFilename(filename,i,prefix,postfix);
        printf("%s\t",filename);
    }
    printf("\n");
    return 0;
}

