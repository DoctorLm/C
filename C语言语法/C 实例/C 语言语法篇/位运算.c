//
//  main.c
//  位运算
//
//  Created by 陆敏 on 2019/2/5.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //按位与
    printf("%x \n",(unsigned char)(2&3));
    printf("%x \n",(unsigned char)(-1&2));
    //按位或
    printf("%x \n",(unsigned char)(2|3));
    printf("%x \n",(unsigned char)(-1|2));
    //异或
    printf("%x \n",(unsigned char)(2^3));
    printf("%x \n",(unsigned char)(-1^2));
    //取反
    printf("%x \n",(unsigned char)(~-1));
    //左移
    printf("%x \n",(unsigned char)(3<<2));
    printf("%x \n",(unsigned char)(-1<<2));
    //右移(分有符号与无符)
    printf("%x \n",(unsigned char)(-1>>2));
    printf("%x \n",(unsigned char)((char)-1>>2));
    printf("%x \n",(unsigned char)((unsigned char)-1>>2));
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
