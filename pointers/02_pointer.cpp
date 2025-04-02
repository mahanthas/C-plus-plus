/*
Declare an integer variable, create a pointer to it, and then a pointer to that pointer.

Print values using all three variables.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptra = &a;
    int **ptrb = &ptra;

    printf(" a : %d\n",a);
    printf(" *ptr : %d\n",*ptra);
    printf(" **ptr : %d\n",**ptrb);
}