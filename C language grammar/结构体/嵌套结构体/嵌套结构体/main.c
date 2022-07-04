//
//  main.c
//  嵌套结构体
//
//  Created by 陆敏 on 2019/1/15.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

struct Date dateWith(int year, int month, int day) {
    struct Date reDate;
    reDate.year = year;
    reDate.month = month;
    reDate.day = day;
    return reDate;
}
void showDateMessage(struct Date yourDate) {
    printf("%d-%d-%d\n",yourDate.year,yourDate.month,yourDate.day);
}
//嵌套结构体类型
struct Student {
    char* name;
    int age;
    struct Date birthday;
};

struct Student studentWith(int age,char* name,struct Date birthday) {
    struct Student reStu;
    reStu.name = name;
    reStu.age = age;
    reStu.birthday = birthday;
    return reStu;
}
void showStudentMessage(struct Student s) {
    printf("name:%s\n",s.name);
    printf("age:%d\n",s.age);
    showDateMessage(s.birthday);
    printf("--------\n");
}
int main(int argc, const char * argv[]) {
    struct Student xiaoming;
    xiaoming.age = 19;
    xiaoming.name = "Ming";
    xiaoming.birthday.year = 2001;
    xiaoming.birthday.month = 7;
    xiaoming.birthday.day = 18;
    xiaoming.birthday = dateWith(2001, 7, 18);
    
    showDateMessage(xiaoming.birthday);
    
    struct Student stuArray[5];
    for (int i=0; i<5; i++) {
        int age = 10+i;
        struct Date date = dateWith(1990+i, i+1, i+15);
        stuArray[i] = studentWith(age, "dancer", date);

    }
    for (int i=0; i<5; i++) {
        showStudentMessage(stuArray[i]);
        
    }
    return 0;
}
