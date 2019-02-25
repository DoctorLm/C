//
//  main.c
//  例10-2
//
//  Created by 陆敏 on 2018/3/25.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAX_BUFF 100
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    FILE *in,*out;
    char buff[MAX_BUFF];
    int length;
    if ((in = fopen("\\AUTOEXEC.BAT", "rt")) == NULL) {
        printf("Cannot open input file.\n");
        return 1;
    }
    if ((out = fopen("\\AUTEXEC.BAT", "wt")) == NULL) {
        printf("Cannot open output file.\n");
        return 1;
    }
    while (!feof(in)) {
        length = fread(buff, 1, MAX_BUFF, in);
        fwrite(buff, 1, length, out);
    }
    fclose(out);
    fclose(in);
    return 0;
}
