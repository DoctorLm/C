//
//  main.c
//  宏定义
//
//  Created by 陆敏 on 2018/3/28.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>
#define Test "test" //替换
#define SUM(a,b) (a+b)
#define SUL(a,b) ((a)*(b))
int mulFunc(int a,int b){
    return a*b;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("test = %s\n",Test);
#undef Test //结束宏
    int sum = SUM(5, 7);
    printf("sum = %d\n",sum);
#undef SUM
    int sul = SUL(2+1, 3+2);
    printf("sul = %d\n",sul);
#undef SUL
    int mulfunc = mulFunc(3, 5);
    printf("mulfunc = %d\n",mulfunc);
    
    
    
    
    return 0;
}
