#include<bits/stdc++.h>
using namespace std;

void sort_vector(vector<int> vec){
    sort(vec.begin(),vec.end());
    for (auto i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    sort(vec.begin(),vec.end(),greater<int>());
    for (auto i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    vector<int> vec = {};
    cout<<"Provide the size of vector : "<<endl;
    int size;
    cin>>size;
    vec.resize(size);
    for(int i =0;i<size;i++){
        cin>>vec[i];
    }

    for (auto i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";

    sort_vector(vec);
    cout<<"vec cbegin is "<<*vec.cbegin()<<endl;
    cout<<"vec cend is "<<*vec.cend()<<endl;

    //push_back function
    vec.push_back(989);
    for (auto i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";

    //emplace_back
    vec.emplace_back(10);
    vec.emplace_back(20);
    for (auto i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";

    //pop_back()
    vec.pop_back();
    for (auto i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";

}