#include <iostream>
#include "List_clj.h"
#include "Link_clj.h"
#include "Tree_clj.h"

#define random(x) (rand()%x)

void testSqList();
void testLink();
void testDLink();
void testTree();

int main() {
//    testSqList();
//    testLink();
//    testDLink();
    testTree();
    return 0;
}

void testSqList(){
    List_clj list;
    for(int i = 0; i < 10; i++){
        list.sqList.data[i] = random(10);
        list.sqList.length = 10;
        printf("%d\t", list.sqList.data[i]);
    }
    printf("\n");
    list.ListInsert(list.sqList, 2, 88);
    for (int j = 0; j < list.sqList.length; ++j) {
        printf("%d\t", list.sqList.data[j]);
    }
    printf("\n");
    Elemtype e;
    list.ListDelete(list.sqList, 3, e);
    for (int j = 0; j < list.sqList.length; ++j) {
        printf("%d\t", list.sqList.data[j]);
    }
    printf("\n%d", e);
}

void testLink(){
    Link_clj link;
    LinkList linkList;
    linkList = link.CreateList1(linkList);
    link.PrintLinkList(linkList);
    free(linkList);
    printf("----------------------------\n");
    linkList = link.CreateList2(linkList);
    link.PrintLinkList(linkList);

    LNode *pNode = link.GetElem(linkList, 2);
    printf("\n%d", pNode->data);

    pNode = link.LocateElem(linkList, 3);
    if(pNode == NULL){
        printf("\nNULL");
    }else{
        printf("\n%d", pNode->data);
    }
    printf("\n");

    // insert
    link.InsertLink(linkList, 2);
    link.PrintLinkList(linkList);
    // delete
    link.DeleteLink(linkList, 2);
    link.PrintLinkList(linkList);
    free(linkList);
}

void testDLink(){
    Link_clj link;
    DLinkList dLinkList;
    dLinkList = link.CreateListD2(dLinkList);
    link.PrintDLinkList(dLinkList);

    link.DInsertLink(dLinkList, 2);
    link.PrintDLinkList(dLinkList);

    link.DDeleteLink(dLinkList,2);
    link.PrintDLinkList(dLinkList);

}

void testTree(){
    Tree_clj tree;
    BiTree T;
    BiTree biTree = tree.CreateBiTree(T);
    tree.PreOrder(biTree);
    printf("\n");
    tree.InOrder(biTree);
    printf("\n");
    tree.PostOrder(biTree);
    printf("\n");

    tree.PreOrderTraverse(biTree);

}




