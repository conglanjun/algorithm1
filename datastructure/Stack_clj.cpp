//
// Created by conglj-a on 2019/7/5.
//

#include "Stack_clj.h"

bool Stack_clj::StackEmpty(SqStack s){
    if(s.top == -1) return true;
    else return false;
}
bool Stack_clj::StackEmpty(SqStackTree s){
    if(s.top == -1) return true;
    else return false;
}

bool Stack_clj::Push(SqStack &s, Elemtype x){
    if(s.top == MaxSize - 1) return false;
    s.data[++s.top] = x;
    return true;
}
bool Stack_clj::PushTree(SqStackTree &s, BiTNode x){
    if(s.top == MaxSize - 1) return false;
    s.data[++s.top] = x;
    return true;
}
bool Stack_clj::PopTree(SqStackTree &s, BiTNode *&x){
    if(s.top == -1) return false;
    x = &(s.data[s.top--]);
    return true;
}


bool Stack_clj::Pop(SqStack &s, Elemtype &x){
    if(s.top == -1) return false;
    x = s.data[s.top--];
    return true;
}

bool Stack_clj::GetTop(SqStack s, Elemtype &x){
    if(s.top == -1) return false;
    x = s.data[s.top];
    return true;
}

void Stack_clj::InitStackTree(SqStackTree &s){
    s.top = -1;
}





