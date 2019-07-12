//
// Created by conglj-a on 2019/7/4.
//

#include <malloc.h>
#include <cstdlib>
#include <cstdio>
#include "Link_clj.h"

LinkList Link_clj::CreateList1(LinkList &L){
    LNode* s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("%d", &x);
    while (x != 9999){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

LinkList Link_clj::CreateList2(LinkList &L){
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    LNode* s, *r = L;
    scanf("%d", &x);
    while (x != 9999){
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

void Link_clj::PrintLinkList(LinkList L){
    LNode* node = L->next;
    while (node != NULL){
        printf("%d\t", node->data);
        node = node->next;
    }
    printf("\n");
}

void Link_clj::PrintDLinkList(DLinkList L){
    DNode* node = L->next;
    while (node != NULL){
        printf("%d\t", node->data);
        node = node->next;
    }
    printf("\n");
}

LNode* Link_clj::GetElem(LinkList L, int i){
    int j = 1;
    LNode* p = L->next;
    if(i == 0) return L;
    if(i < 1) return NULL;
    while (p && j < i){
        p = p->next;
        j++;
    }
    return p;
}

LNode* Link_clj::LocateElem(LinkList L, Elemtype e){
    LNode* p = L->next;
    while (p != NULL && p->data != e){
        p = p->next;
    }
    return p;
}

bool Link_clj::InsertLink(LinkList &L, int i){
    if(i < 1) return false;
    int x;
    LNode *pNode = GetElem(L, i - 1);
    if(pNode == NULL) return false;
    LNode* s = (LNode*)malloc(sizeof(LNode));
    scanf("%d", &x);
    s->data = x;
    s->next = pNode->next;
    pNode->next = s;
    return true;
}

bool Link_clj::DeleteLink(LinkList &L, int i){
    if(i < 1){
        return false;
    }
    LNode *p = GetElem(L, i - 1);
    LNode *q = p->next;// delete element
    p->next = q->next;
    free(q);
    return true;
}

DLinkList Link_clj::CreateListD2(DLinkList &L){
    int x;
    L = (DLinkList)malloc(sizeof(DNode));
    L->next = NULL;
    DNode *s, *r = L;
    scanf("%d", &x);
    while (x != 9999){
        s = (DNode*)malloc(sizeof(DNode));
        s->data = x;
        s->next = r->next;
        r->next = s;
        s->piror = r;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

DNode* Link_clj::DGetElem(DLinkList &DL, int i){
    int j = 1;
    DNode *p = DL->next;
    if(i == 0) return DL;
    if(i < 1) return NULL;
    while (p && j < i){
        p = p->next;
        j++;
    }
    return p;
}

bool Link_clj::DInsertLink(DLinkList &DL, int i){
    if(i < 1){
        return false;
    }
    DNode *p = DGetElem(DL, i - 1);
    DNode *s = (DNode*)malloc(sizeof(LNode));
    int x;
    scanf("%d", &x);
    s->data = x;
    s->next = p->next;
    p->next->piror = s;
    p->next = s;
    s->piror = p;
    return true;
}

bool Link_clj::DDeleteLink(DLinkList &DL, int i){
    if(i < 1){
        return false;
    }
    DNode *p = DGetElem(DL, i - 1);
    DNode *q = p->next;
    p->next = p->next->next;
    p->next->piror = p;
    free(q);
    return true;
}






