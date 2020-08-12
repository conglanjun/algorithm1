//
// Created by conglj-a on 2019/7/8.
//

#ifndef ALGORITHM_TREE_CLJ_H
#define ALGORITHM_TREE_CLJ_H
#define MaxSize 100

typedef char ElemType;
// 1.双亲表示法
//typedef struct {
//    ElemType data;
//    int parent;
//}TNode;
//
//typedef struct {
//    TNode nodes[MaxSize];
//    int n;
//}Tree;

// 2.孩子表示法
typedef struct CNode{
    int child;
    CNode *next;
}*Child;

struct TNode{
    ElemType data;
    Child firstChild;
};

struct Tree{
    TNode nodes[MaxSize];
    int n;
};

// 3.孩子兄弟表示法
struct CSNode{
    ElemType data;
    CSNode *firstChild, *rightsib;
};

//4.二叉链表
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild, *rchild;
}*BiTree;


class Tree_clj {

public:
    void PreOrder(BiTree T);
    void InOrder(BiTree T);
    void PostOrder(BiTree T);
    BiTree CreateBiTree(BiTree T);

    void PreOrderTraverse(BiTree b);

    BiTNode* BST_Search(BiTNode* T, ElemType key);
    BiTNode* BST_Search1(BiTNode* T, ElemType key);
    int BST_Insert(BiTNode* &T, ElemType key);

    void Create_BST(BiTNode* &T, ElemType key[], int n);


};













#endif //ALGORITHM_TREE_CLJ_H





