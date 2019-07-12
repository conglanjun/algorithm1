//
// Created by conglj-a on 2019/7/8.
//

#include <cstdio>
#include <malloc.h>
#include "Tree_clj.h"
#include "Stack_clj.h"

void Tree_clj::PreOrder(BiTree T){
    if(T != NULL){
        printf("%c", T->data);
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}

void Tree_clj::InOrder(BiTree T){
    if(T != NULL){
        InOrder(T->lchild);
        printf("%c", T->data);
        InOrder(T->rchild);
    }
}

void Tree_clj::PostOrder(BiTree T){
    if(T != NULL){
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        printf("%c", T->data);
    }
}

BiTree Tree_clj::CreateBiTree(BiTree T){
    char ch;
    fflush(stdin);
    scanf("%c", &ch);
    fflush(stdin);
    if (ch != '#'){
        T = (BiTree)malloc(sizeof(BiTNode));
        T->data = ch;
        T->lchild = NULL;
        T->rchild = NULL;
        printf("%c's left child is: ", T->data);
        T->lchild = CreateBiTree(T->lchild);
        printf("%c's right child is: ", T->data);
        T->rchild = CreateBiTree(T->rchild);
    }
    return T;
}

void Tree_clj::PreOrderTraverse(BiTree b){
    Stack_clj sclj;
    SqStackTree stack;
    sclj.InitStackTree(stack);
    BiTree p = b;
    while (p || !sclj.StackEmpty(stack)){
        while (p){
            printf("%c", p->data);
            sclj.PushTree(stack, *p);
            p = p->lchild;
        }
        if(!sclj.StackEmpty(stack)){
            sclj.PopTree(stack, p);
            p = p->rchild;
        }
    }
}

BiTNode* Tree_clj::BST_Search(BiTNode* T, ElemType key){
    if(T == NULL) return NULL;
    else{
        if(T->data == key) return T;
        else if(key < T->data) return BST_Search(T->lchild, key);
        else return BST_Search(T->rchild, key);
    }
}


BiTNode* Tree_clj::BST_Search1(BiTNode* T, ElemType key){
    BiTNode* p = T;
    while (p != NULL && key != T->data){
        if(key < T->data){
            p = T->lchild;
        }else{
            p = T->rchild;
        }
    }
    return p;
}

int Tree_clj::BST_Insert(BiTNode* &T, ElemType key){
    if(T == NULL){
        T = (BiTNode*)malloc(sizeof(BiTNode));
        T->data = key;
        T->lchild = NULL;
        T->rchild = NULL;
        return 1;
    }else if(key == T->data){
        return 0;
    }else if(key < T->data){
        return BST_Insert(T->lchild, key);
    }else if(key > T->data){
        return BST_Insert(T->rchild, key);
    }
}

void Tree_clj::Create_BST(BiTNode* &T, ElemType key[], int n){
    T = NULL;
    int i = 0;
    while (i < n){
        BST_Insert(T, key[i]);
        ++i;
    }
}














