#include<bits/stdc++.h>
using namespace std;

void fun(){
    stack<int> s;
    int a;

    cout<<"Provide the number of element to be added in stack"<<endl;
    cin>>a;
    for(auto i = 0 ; i < a; i++){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    fun();
    return 0;
}