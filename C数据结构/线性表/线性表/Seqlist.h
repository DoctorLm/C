//
//  Seqlist.h
//  线性表
//
//  Created by 陆敏 on 2018/3/28.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#ifndef Seqlist_h
#define Seqlist_h

#include <stdio.h>
#define LENGTH 100
//给一个现有[类型]取别名
typedef int dataType;

typedef struct {
    dataType dataArray[LENGTH];//存放顺序表的所有数据
    int nLength; //记录当前顺序表的长度
} SeqList;


void initList(SeqList* myList);//初始化操作

int listLength(SeqList myList);//求长度

void insertNode(SeqList* myList,int index,dataType data);//插入数据项

dataType getNodeWithIndex(SeqList myList,int index);//获取某位置的数据项

int getIndexWithNode(SeqList myList,dataType data);//根据数据获取其在顺序表中的位置





//typedef int* pInt;
//struct SeqList{
//    dataType dataArray[100];//存放顺序表的所有数据
//    int nLength; //记录当前顺序表的长度
//};

//typedef struct SeqList{
//    dataType dataArray[100];//存放顺序表的所有数据
//    int nLength; //记录当前顺序表的长度
//} mySeqList;

#endif /* Seqlist_h */
