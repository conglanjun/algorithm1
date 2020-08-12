//
// Created by klfy on 8/12/20.
//
#include "sort.h"
#include <iostream>
using namespace std;

void printFunc(int *a, int n)
{
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] << ",";
    }
    cout << endl;
}

int main()
{
    int a[6] = {3,1,4,6,2,5};
    int n = 6;
    Sort sort;
    sort.bubboSort(a, n);
    printFunc(a, n);
}

