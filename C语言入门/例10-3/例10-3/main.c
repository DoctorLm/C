//
//  main.c
//  例10-3
//
//  Created by 陆敏 on 2018/3/25.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <conio.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    FILE* stream;
    char string[] = "This is a test";
    char ch;
    int i,len;
    stream = fopen("TEST.TXT", "w+");
    len = strlen(string);
    for (i = 0; i<len; i++) {
        fputc(string[i], stream);
    }
    fseek(stream, 0, SEEK_SET);
    do {
        ch = fgetc(stream);
        putch(ch);
    } while (ch != EOF);
    fclose(stream);
    return 0;
}
