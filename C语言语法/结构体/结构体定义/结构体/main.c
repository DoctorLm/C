//
//  main.c
//  结构体
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//全局 结构体大类型定义
struct Student {
    int age;
    char name[20];
    double mathScore;
    double englishScore;
    double ChineseScore;
}lumin,wangly,luyf;
typedef struct Student s3;
struct Student s1;
struct Student s2;
//5个结构体变量:lumin,wangly,luyf,s1,s2
//完全初始化
struct Student lumin = {40,"陆敏",100,100,100};
//部分初始化
struct Student wangly = {.name = "王莉亚",.mathScore = 99};

void testFunc1() {
    wangly = lumin; //a = b
    wangly.age = 18;
    strcpy(wangly.name, "亚亚");
    wangly.ChineseScore = 98;
    wangly.age = lumin.age;
    //局部结构体是否可以被保存下来...
}
void testFunc() {
    struct MyStudent {
        int age;
        char name[20];
        double mathScore;
        double englishScore;
        double ChineseScore;
    };
}
struct Student studentMakeWith(int age,char* name, double mathScore,double chineseScore, double englishScore) {
    struct Student result;
    result.age = age;
    strcpy(result.name, name);
    result.mathScore = mathScore;
    result.ChineseScore = chineseScore;
    result.englishScore = englishScore;
    return result;
}
void showMessageOfStudent(struct Student stu) {
    printf("name = %s\n",stu.name);
    printf("age = %d\n",stu.age);
    printf("CH = %.2f\n",stu.ChineseScore);
    printf("MA = %.2f\n",stu.mathScore);
    printf("EN = %.2f\n",stu.englishScore);
}
int main(int argc, const char * argv[]) {

    s3 newStudent1 = studentMakeWith(20, "huanghuang", 99, 99, 99);
    showMessageOfStudent(newStudent1);
    
    struct Student newStudent = studentMakeWith(19, "huahua", 90, 90, 90);
    showMessageOfStudent(newStudent);
    
    struct Student dancer;
    dancer.age = 18;
    strcpy(dancer.name, "dancer");
    
    dancer.mathScore = 100;
    dancer.ChineseScore = 100;
    dancer.englishScore = 100;
    printf("%d\n",dancer.age);
    printf("%s\n",dancer.name);
    
    return 0;
}
