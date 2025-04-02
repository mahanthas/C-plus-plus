#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int main(){
    int (*funcptr) (int,int) = sum;
    cout<<funcptr(10,20)<<endl;
}