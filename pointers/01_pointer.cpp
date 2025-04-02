/*
Declare an integer pointer and initialize it with an integer variable.

Perform pointer arithmetic (increment, decrement, addition, subtraction).
*/
#include<bits/stdc++.h>
using namespace std;

void add(int *ptra,int *ptrb){
    printf("%d\n",(*ptra+*ptrb));
}
void sub(int *ptra,int *ptrb){
    printf("%d\n",abs(*ptra - *ptrb));
}
void increment(int *ptra,int *ptrb){
    printf("%d\n",(*ptra)++);
    printf("%d\n",(*ptrb)++);
}
void decrement(int *ptrb,int *ptra){
    printf("%d\n",(*ptra)--);
    printf("%d\n",(*ptrb)--);
}

int main(){
    int  a = 30,b=20;
    int *ptra = &a;
    int *ptrb = &b;
    printf("%d\n",*ptra+4);

    add(ptra,ptrb);
    sub(ptra,ptrb);
    increment(ptra,ptrb);
    decrement(ptra,ptrb);

}