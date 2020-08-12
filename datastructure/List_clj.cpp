//
// Created by conglj-a on 2019/7/4.
//

#include "List_clj.h"

bool List_clj::ListInsert(SqList &L, int i, Elemtype e){
    if(i > L.length + 1 || i <1){
        return false;
    }
    if(L.length >= MaxSize){
        return false;
    }
    for(int j = L.length; j >= i;j--){
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length ++;
    return true;
}

bool List_clj::ListDelete(SqList &L, int i, Elemtype &e){
    if(i > L.length || i < 1){
        return false;
    }
    e = L.data[i - 1];
    for(int j = i; j < L.length; j++){
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}
