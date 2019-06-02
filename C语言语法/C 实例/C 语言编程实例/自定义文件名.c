//
//  main.c
//  自定义文件名
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void getstring(char *DataChar){
    int i = 0;
    if (strlen(DataChar) == 1) {
        DataChar[3] = DataChar[0];
        for (i = 0; i<3; i++) {
            DataChar[i] = '0';
        }
    }else
        if (strlen(DataChar) == 2) {
            DataChar[3] = DataChar[1];
            DataChar[2] = DataChar[0];
            for (i = 0; i<2; i++) {
                DataChar[i] = '0';
            }
        }
        else
            if (strlen(DataChar) == 3) {
                DataChar[3] = DataChar[2];
                DataChar[2] = DataChar[1];
                DataChar[1] = DataChar[0];
                for (i = 0; i<1; i++) {
                    DataChar[i] = '0';
                }
            }
}
int DataOrChar(char* DataInt){
    int i;
    for(i = 0;i<strlen(DataInt);i++)
    {
        if (DataInt[i] < '0' || DataInt[i] >= '9'){
            return 1;
        }
    }
    return 0;
}
char* getFilename(char* filename,char* index,char* prefix, char* postfix){
    int i = 0,j = 0,k = 0;
    for (i = 0;i<strlen(prefix);i++){
        filename[i] = prefix[i];
        printf("prefix[%d] = %c\t",i,prefix[i]);
    }
    printf("filename = %s\n",filename);
    j = i;
    for (j = 0;j<strlen(index);j++,i++){
        filename[i] = index[j];
        printf("index[%d] = %c\t",j,index[j]);
    }
    printf("filename = %s\n",filename);
    
    k = i;
    for (k = 0;k<strlen(postfix);k++,i++){
        filename[i] = postfix[k];
        printf("postfix[%d] = %c\t",k,postfix[k]);
    }
    printf("filename = %s\n",filename);
    return filename;
}

int main(int argc, const char * argv[]) {
    char str_int[5] = "0";
    char filename[30] = "0";
    char* prefix = "tank";
    char* postfix = ".bmp";
    printf("Please input 0~9999 Int DATA:");
    gets(str_int);
    if (strlen(str_int) > 4){
        printf("Input Error!\n");
    }
    else if (DataOrChar(str_int)){
        printf("Input Error!\n");
    }
    else {
        getFilename(filename, str_int, prefix, postfix);
    }
    printf("Filename = %s\n",filename);
    
    return 0;
}
