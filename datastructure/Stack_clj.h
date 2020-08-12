//
// Created by conglj-a on 2019/7/5.
//

#ifndef ALGORITHM_STACK_CLJ_H
#define ALGORITHM_STACK_CLJ_H

#include "Tree_clj.h"

#define MaxSize 50
//typedef int Elemtype;
typedef char Elemtype;

typedef struct{
    Elemtype data[MaxSize];
    int top;
}SqStack;
typedef struct{
    BiTNode data[MaxSize];
    int top;
}SqStackTree;


class Stack_clj {

public:
    bool StackEmpty(SqStack s);
    bool StackEmpty(SqStackTree s);
    bool Push(SqStack &s, Elemtype x);
    bool PushTree(SqStackTree &s, BiTNode x);
    bool Pop(SqStack &s, Elemtype &x);
    bool GetTop(SqStack s, Elemtype &x);
    void InitStackTree(SqStackTree &s);
    bool PopTree(SqStackTree &s, BiTNode *&x);

};


#endif //ALGORITHM_STACK_CLJ_H
