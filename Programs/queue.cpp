#include<bits/stdc++.h>
using namespace std;

void queue_fun(){
    queue<int> q;

    int a;
    cout<<"Provide the number of element to be added in stack"<<endl;
    cin>>a;
    for(auto i = 0 ; i < a; i++){
        q.push(i);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
}
int main(){
    queue_fun();
}