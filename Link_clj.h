//
// Created by conglj-a on 2019/7/4.
//

#ifndef ALGORITHM_LINK_CLJ_H
#define ALGORITHM_LINK_CLJ_H

typedef char Elemtype;
//typedef int Elemtype;

typedef struct LNode{
    Elemtype data;
    struct LNode* next;
}*LinkList;

typedef struct DNode{
    Elemtype data;
    struct DNode* piror, *next;
}*DLinkList;

class Link_clj {

public:
    LinkList CreateList1(LinkList &L);
    LinkList CreateList2(LinkList &L);
    LNode* GetElem(LinkList L, int i);
    LNode* LocateElem(LinkList L, Elemtype e);
    bool InsertLink(LinkList &L, int i);
    bool DeleteLink(LinkList &L, int i);

    DLinkList CreateListD2(DLinkList &L);
    DNode* DGetElem(DLinkList &DL, int i);
    bool DInsertLink(DLinkList &DL, int i);
    bool DDeleteLink(DLinkList &DL, int i);

    void PrintLinkList(LinkList L);
    void PrintDLinkList(DLinkList L);

};


#endif //ALGORITHM_LINK_CLJ_H
