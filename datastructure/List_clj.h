//
// Created by conglj-a on 2019/7/4.
//

#ifndef ALGORITHM_LIST_CLJ_H
#define ALGORITHM_LIST_CLJ_H

#include <malloc.h>

#define MaxSize 50
#define InitSize 100
//typedef int Elemtype;
typedef char Elemtype;

typedef struct {
    Elemtype data[MaxSize];
    int length;
} SqList;

typedef struct {
    Elemtype *data;
    int MaxSize_seq, length;
} SeqList;

class List_clj {

public:

    List_clj(){
        seqList.data = (Elemtype*)malloc(sizeof(Elemtype) * InitSize);
    }

    SqList sqList;
    SeqList seqList;

    bool ListInsert(SqList &L, int i, Elemtype e);

    bool ListDelete(SqList &L, int i, Elemtype &e);

};


#endif //ALGORITHM_LIST_CLJ_H
