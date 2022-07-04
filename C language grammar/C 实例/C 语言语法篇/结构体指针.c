//
//  main.c
//  结构体指针
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
struct Student {
    int age;
    char* name;
};
int compareStudents(struct Student* p1,struct Student* p2) {
    return p1->age > p2->age;
}
void sortArray(struct Student* pArray,int nLength,int (*pCompare)(struct Student* p1,struct Student* p2)){
    for (int i = 1; i<nLength; i++) {
        for (int j = 0; j<nLength - i; j++) {
            if (compareStudents(&pArray[j], &pArray[j+1])) {
                struct Student temp = pArray[j];
                pArray[j] = pArray[j+1];
                pArray[j+1] = temp;
            }
        }
    }
}
void showStudentMessage(struct Student* p) {
    printf("p->name = %s\n",p->name);
    printf("p-age = %d\n",p->age);
    printf("-----------------------\n");
}
int main(int argc, const char * argv[]) {
    /*
    struct Student* p;
    struct Student s1 = {19,"lilei"};
    p = &s1;
    printf("p->name = %s\n",p->name);
    printf("p-age = %d\n",p->age);
    printf("s1.name = %s\n",s1.name);
    printf("s1.age = %d\n",s1.age);
    */
    struct Student array[5] = {
        {18,"lucy"},{22,"tom"},{21,"jack"},{19,"rose"},{20,"susan"}
    };
    sortArray(array, 5, compareStudents);
    
    for (int i = 0; i < 5; i ++) {
        showStudentMessage(&array[i]);
    }
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
