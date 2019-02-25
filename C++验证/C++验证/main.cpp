//
//  main.cpp
//  C++验证
//
//  Created by 陆敏 on 2019/1/22.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <iostream>
using namespace std;

typedef int DataType;
struct node {
    DataType data;
    struct node* next;
};
typedef struct node listNode;

struct linkList {
    int nLength;
    listNode* head;
};
typedef struct linkList LinkList;


void initLinkList(LinkList* list){
    list->head = NULL;
    list->nLength = 0;
}
int listLength(linkList list){
    return list.nLength;
}
listNode* nodeAtIndex(LinkList list,int index) {
    listNode* pNode = list.head;
    for (int i=0; i<index; i++) {
        pNode = pNode->next;
    }
    return pNode;
}
void insertNodeAtIndex(LinkList* list,DataType data,int index){
    listNode* newNode = (listNode*)malloc(sizeof(listNode));
    newNode->data = data;
    if (list->nLength ==0) {
        list->head = newNode;
        newNode->next = NULL;
    }else {
        listNode* preNode = nodeAtIndex(*list,index-1);
        listNode* node = nodeAtIndex(*list, index);
        newNode->next = node;
        preNode = newNode;
    }
    list->nLength++;
}

int main(int argc, const char * argv[]) {
    
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
