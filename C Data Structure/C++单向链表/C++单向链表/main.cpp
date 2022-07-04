//
//  main.cpp
//  C++单向链表
//
//  Created by 陆敏 on 2018/3/21.
//  Copyright © 2018年 Lumin. All rights reserved.
//

#include <iostream>
#define LEN sizeof(class list)
using namespace std;
class list{
public:
    int num;
    char name[12];
    int score;
    class list* next;
};
void initListNode(class list* node,int num,const char* name,int score){
    node->num = num;
    strcpy(node->name, name);
    node->score = score;
}
void print_node(class list* node){
     cout << node->num<<"\t"<<"\t"<< node->name<<"\t" <<"\t"<< node->score<<"\n";
}
void print_list(class list* header){
    class list *walk = header;
    while (walk) {
        print_node(walk);
        walk = walk->next;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    class list* node,* pl,* head;
    head = node = (class list * )malloc(LEN);
    cout << "请输入5位学生的数据\n";
//    cout << "请输入第"<<1<<"位学生的座号:";
//    cin >> p->num;
//    cout << "请输入第"<<1<<"位学生的姓名:";
//    cin >> p->name;
//    cout << "请输入第"<<1<<"位学生的成绩:";
//    cin >> p->score;
    initListNode(node, 01, "lumin", 99);
    for (int i = 1; i < 5; i ++) {
        pl = node;
        node = (class list * )malloc(LEN);
        initListNode(node, i+1, "lumin", 96+i);
//        cout << "请输入第"<<i + 1<<"位学生的座号:";
//        cin >> p->num;
//        cout << "请输入第"<<i + 1<<"位学生的姓名:";
//        cin >> p->name;
//        cout << "请输入第"<<i + 1<<"位学生的成绩:";
//        cin >> p->score;
        pl->next = node;
    }
    node->next = NULL;
//    node = head;
    cout << "\t学 生 成 绩\n";
    cout << "座号\t"<< "\t姓名\t" << "\t成绩\n";
    cout <<"====================\n";
    print_list(head);
//    while (node->next != NULL) {
//        cout << node->num<<"\t"<<"\t"<< node->name<<"\t" <<"\t"<< node->score<<"\n";
//        node = node->next;
//    }
//    cout << node->num<<"\t"<<"\t"<< node->name<<"\t" <<"\t"<< node->score<<"\n";
    cout <<"====================\n";
    return 0;
}
