//
//  Seqlist.c
//  线性表
//
//  Created by 陆敏 on 2018/3/28.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include "Seqlist.h"

//初始化操作
void initList(SeqList* myList){
    for (int i=0; i<LENGTH; i++) {
        myList->dataArray[i] = '0';
    }
    myList->nLength = 0;
}
//求长度
int listLength(SeqList myList){
    return myList.nLength;
}
//插入数据项
void insertNode(SeqList* myList,int index,dataType data){
    if (index<0 || index>myList->nLength) {
        index = myList->nLength;//
    }
    for (int i=myList->nLength-1; i>=index; i--) {
        myList->dataArray[i+1] = myList->dataArray[i];
    }
    myList->dataArray[index] = data;
    myList->nLength++;
}
//获取某位置的数据项
dataType getNodeWithIndex(SeqList myList,int index){
    if (index<0 || index>myList.nLength) {
        printf("数据不存在!\n");
        return 0;
    }
        dataType data = myList.dataArray[index];
    return data;
}
//根据数据获取其在顺序表中的位置
int getIndexWithNode(SeqList myList,dataType data){
    for (int i=0; i<myList.nLength; i++) {
        if (data == myList.dataArray[i]) {
            return i;
        }
        continue;
    }
    return 0;
}
