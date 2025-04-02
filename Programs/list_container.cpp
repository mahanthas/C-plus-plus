#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    list<int> l ={1,2,3,4,5};

    l.push_back(6);
    l.push_front(0);
    l.emplace_back(100);
    l.emplace_front(200);

    for (auto i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    //200,0,1,2,3,4,5,6,100

    list<int> l2 = {};
    
    l2.push_back(100);
    l2.push_back(200);
    l2.push_front(300);
    l2.push_front(400);

    for (auto i: l2){
        cout<<i<<" ";
    }
    cout<<endl;
    // 400,300,100,200

    list<int> l3 ={1,2,3,4,5};

    l3.push_back(6);
    l3.push_front(0);
    l3.emplace_back(100);
    l3.emplace_front(200);
    l3.pop_back();
    l3.pop_front();

    for (auto i: l3){
        cout<<i<<" ";
    }
    cout<<endl;
    //0 1 2 3 4 5 6   because pop_back and pop_front removed the emplace_back and emplace_front values

}