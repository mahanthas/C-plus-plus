#include<bits/stdc++.h>
using namespace std;

void swap(int *ptr1,int* ptr2){
    int *ptr3 = new int;
    *ptr3 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
}


int main(){
    int a= 10;
    unique_ptr<int> up = make_unique<int>(a);

    cout<<a<<" its memory address is : "<<up.get()<<endl;

    int b = 30,c =40;
    int *bptr = &b;
    int* cptr = &c;
    cout<<*bptr << " its address is : "<<bptr<<endl;

    swap(&b,&c);

    cout<<"value of b is : "<<*bptr<<endl;
    cout<<"value of c is : "<<*cptr<<endl;
}