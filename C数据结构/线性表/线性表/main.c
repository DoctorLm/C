//
//  main.c
//  线性表
//
//  Created by 陆敏 on 2018/3/28.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <stdio.h>
#include "Seqlist.h"

void initList(SeqList* myList);//初始化操作
int listLength(SeqList myList);//求长度
void insertNode(SeqList* myList,int index,dataType data);//插入数据项
dataType getNodeWithIndex(SeqList myList,int index);//获取某位置的数据项
int getIndexWithNode(SeqList myList,dataType data);//根据数据获取其在顺序表中的位置

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    SeqList List;
    initList(&List);
    listLength(List);
    insertNode(&List, 0, 10);
    insertNode(&List, 1, 20);
    insertNode(&List, 2, 30);
    int data = getNodeWithIndex(List,1);
    int index = getIndexWithNode(List, 30);
    printf("len = %d\n",List.nLength);
    printf("data = %d\n",data);
    printf("index = %d\n",index);
 

//    dataType myAge = 10;
//    printf("myAge = %d\n",myAge);
//    int number = 9;
//    pInt p = &number;
//    printf("p = %d\n",*p);
//    mySeqList s;
//    s.dataArray;
//    s.nLength;
    return 0;
}
