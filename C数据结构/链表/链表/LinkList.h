//
//  LinkList.h
//  链表
//
//  Created by 陆敏 on 2018/4/11.
//  Copyright © 2018年 陆敏. All rights reserved.
//

#ifndef LinkList_h
#define LinkList_h

#include <stdio.h>
//使用结构体描述节点

typedef int DataType;
struct node {
    DataType data;//数据域
    struct node* next;//指针域
};
typedef struct node ListNode;

typedef struct {
    int nLength;//记录链表长度
    ListNode* head;//记录链表首地址
}linkList;

//链表初始化
void initLinkList(linkList* list);
//求链表长度
int listLength(linkList list);
//插入一个节点
void insertNodeAtIndex(linkList* list,DataType data,int index);
//删除一个节点，返回被删除的节点
DataType deleteNodeAtIndex(linkList* list,int index);
//修改一个节点
void updateNodeAtIndex(linkList list,ListNode newNode,int index);
//指定索引查找节点
ListNode* nodeAtIndex(linkList list,int index);
//指定数据内容查找节点位置
int indexOfNodeContent(linkList list,DataType data);
#endif /* LinkList_h */
