#include<bits/stdc++.h>
using namespace std;

void sorting(){
    vector<int> vec = {1,3,96,7,9,89};

    //sorting ascending order
    sort(vec.begin(),vec.end());

    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;

    //sorting desecnding order
    sort(vec.begin(),vec.end(),greater<int>());

    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

void bubblesort(){
    vector<int> vec1 = {5,3,9,4,8,0};
    int n = vec1.size();
    for (int i = 0;i < n - 1;i++){ // here n-1 because of size is 5 but in array we start with 0,1,2,3,4
        for(int j = 0; j < n-i-1;j++){
            if (vec1[j] > vec1[j+1]){
                swap(vec1[j],vec1[j+1]);
            }
        }
    }
    for(auto i: vec1){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    sorting();
    bubblesort();
    return 0;
}