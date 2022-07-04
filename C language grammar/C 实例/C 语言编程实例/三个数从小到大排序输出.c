//
//  main.c
//  001.C语言三个数从小到大排序输出
//
//  Created by 陆敏 on 2019/2/11.
//  Copyright © 2019 陆敏. All rights reserved.
//

/*
 任意输入 3 个整数，编程实现对这 3 个整数由小到大进行排序。
 实现过程：
 (1)定义数据类型，本实例中 a、b、c、t 均为基本整型。
 (2) 使用输入函数获得任意 3 个值赋给 a、b、c。
 (3) 使用 if 语句进行条件判断，如果 a 大于 b，则借助于中间变量 t 互换 a 与 b 值， 依此类推比较 a 与 c、b 与 c，最终结果即为 a、b、c 的升序排列。
 (4) 使用输出函数将 a、b、c 的值依次输出。
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,t;    /*定义4个基本整型变量a、b、c、t*/
    printf("Please input a,b,c:\n");    /*双引号内的普通字符原样输出并换行*/
    scanf("%d,%d,%d",&a,&b,&c);    /*输入任意3个数*/
    if(a>b)    /*如果a大于b,借助中间变量t实现a与b值的互换*/
    {
        t = a;
        a = b;
        b = t;
    }
    if(a>c)    /*如果a大于c,借助中间变景t实现a与c值的互换*/
    {
        t = a;
        a = c;
        c = t;
    }
    if(b>c)    /*如果b大于c,借助中间变量t实现b与c值的互换*/
    {
        t = b;
        b = c;
        c = t;
    }
    printf("The order of the number is:\n");
    printf("%d,%d,%d",a,b,c);    /*输出函数顺序输出a、b、c的值*/
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
/*
 本实例使用 scanf("%d%d%d",&a,&b,&c); 从键盘中获得任意 3 个数。在输入数据时，在两个数据之间以一个或多个空格间隔，也可以用 Enter 健、Tab 键，不能用逗号作为两个数据间的分隔符。 如果用格式输入函数 scanf("％d,％d,%d",&a,&b,&c) 输入数据，两个数据之间要用“,”做间隔。
 */

