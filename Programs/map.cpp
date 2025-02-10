#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    map<int,int> m;
    m[1] = 100;
    m[2] = 200;
    m[4] = 500;
    m[7] = 800;

    m.insert({45,6700}); // in insert you need to send the pair in curly bracket
    m.emplace(85,8900); // here we just need to send the data , fucntion will take care of object creation
    m.emplace(5,1000);

    if (m.find(4) != m.end()){
       cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }

    m.erase(7); // here we just provide the key value
    for(auto a: m)
        cout<<a.first<<" "<<a.second<<endl;
        // here a.first is key and a.second is value

    cout<<"how many keys are present in map using count()  "<<m.count(4)<<endl;
    // here count doesnt show the value it shows how many laptop keys are present

    // output will be in a sorted way in map
}