//
//  main.c
//  树节点
//
//  Created by 陆敏 on 2019/1/14.
//  Copyright © 2019 陆敏. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//存储一个树的节点
struct tree_node{
    //数据域
    int x;//相对与父节点坐标相
    int y;
    //子域，可使用动态数组、链表来存储
    struct tree_node* children;//子链表头节点
    struct tree_node* brother_next;
    //父域
    struct tree_node* parent;
};
static struct tree_node* alloc_node(){
    struct tree_node* node = malloc(sizeof(struct tree_node));
    memset(node, 0, sizeof(struct tree_node));
    return  node;
}
static void free_node(struct tree_node* node){
    free(node);
}
void add_child(struct tree_node* parent,struct tree_node* node){
    printf("parent = %p\tnode = %p\n",parent,node);
    if (parent == NULL) {
        printf("error parent == NULL!\n");
        return;
    }
    //将我们的节点加入到父亲节点的子域
    node->brother_next = parent->children;
    //    printf("node->brother_next = %p\tparent->children = %p\n",node->brother_next,parent->children);
    parent->children = node;
    printf("parent->children = %p\tnode = %p\n",parent->children,node);
    //将我们的节点的父亲域设置为当前的parent;
    node->parent = parent;
    printf("node->parent = %p\tparent = %p\n",node->parent,parent);
    printf("\n");
}
//1.假设代码遍历树
//2.将子域作为树的根节点遍历一次
//3.最后遍历自己
void trans_tree_01(struct tree_node* root){
    struct tree_node* walk = root->children;
    while (walk) {
        trans_tree_01(walk);//假设规模（n-1)成立
        walk = walk->brother_next;
    }
    printf("tree node %d, %d\n",root->x,root->y);
}
void trans_tree_02(struct tree_node* root){
    struct tree_node* walk = root->children;
    printf("tree node %d, %d\n",root->x,root->y);
    while (walk) {
        trans_tree_02(walk);
        walk = walk->brother_next;
    }
}
//从父节点删除子树
void remove_from_parent(struct tree_node* node){
    if (node->parent == NULL) {
        return;
    }
    struct tree_node* p = node->parent;
    struct tree_node** walk = &p->children;
    while (*walk) {
        if ((*walk) == node) {
            //step1:将这个节点从它的父节点里移除
            (*walk) = node->brother_next;
            //setp2:将这个节点的父或设置为NULL
            node->parent = NULL;
            return;
        }
        walk = &(*walk)->brother_next;
    }
    printf("tree error,child invalid\n");
}
int main(int argc, const char * argv[]) {
    //根节点
    struct tree_node* root = NULL;
    struct tree_node* node = alloc_node();
    root = node;
    root->x = 0;
    root->y = 0;
    printf("root = %p\tnode = %p\n",root,node);
    printf("\n");
    //--------------------------------------
    node = alloc_node();
    node->y = 1;
    node->x = 0;
    add_child(root, node);
    //--------------------------------------
    node = alloc_node();
    node->y = 1;
    node->x = 1;
    add_child(root, node);
    struct tree_node* node_01 = alloc_node();
    node_01->y = 1;
    node_01->x = 2;
    add_child(root, node_01);
    node = alloc_node();
    node->y = 2;
    node->x = 0;
    add_child(node_01, node);
    node = alloc_node();
    node->y = 2;
    node->x = 1;
    add_child(node_01, node);
    printf("第一次------------------------------\n");
    trans_tree_01(root);
    printf("第一次结束---------------------------\n");
    remove_from_parent(node_01);
    printf("第二次------------------------------\n");
    trans_tree_01(root);
    printf("第二次结束---------------------------\n");
    printf("第三次------------------------------\n");
    trans_tree_01(node_01);
    printf("第三次结束---------------------------\n");
    free_node(node);
    return 0;
}

