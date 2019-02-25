//
//  LinkList.c
//  链表
//
//  Created by 陆敏 on 2018/4/11.
//  Copyright © 2018年 陆敏. All rights reserved.
//

#include "LinkList.h"
#include <stdlib.h>
//链表初始化
void initLinkList(linkList* list){
    list->head = NULL;
    list->nLength = 0;
}
//求链表长度
int listLength(linkList list){
    return list.nLength;
}
//插入一个节点
void insertNodeAtIndex(linkList* list,DataType data,int index){
    //分配节点
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    //存放数据
    newNode->data = data;
    if (list->nLength==0) {
        list->head = newNode;
        newNode->next=NULL;
    }else {
        ListNode* preNode = nodeAtIndex(*list, index-1);
        ListNode* node = nodeAtIndex(*list, index);
        preNode->next = newNode;
        newNode->next = node;
    }
    list->nLength++;
}
//指定索引查找节点
ListNode* nodeAtIndex(linkList list,int index){
    ListNode* pNode = list.head;
    for (int i=0; i<index; i++) {
        pNode = pNode->next;
    }
    return pNode;
}
//删除一个节点，返回被删除的节点
DataType deleteNodeAtIndex(linkList* list,int index){
    ListNode* deleNode = NULL;
    if (index<=0) {
        deleNode = list->head;
        list->head = list->head->next;
    }else {
        deleNode = nodeAtIndex(*list, index);
        ListNode* preNode = nodeAtIndex(*list, index-1);
        preNode->next = deleNode->next;
    }
    DataType reDate = deleNode->data;
    free(deleNode);
    return reDate;
}












