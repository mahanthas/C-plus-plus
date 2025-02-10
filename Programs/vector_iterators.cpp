#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 = {1,2,3,4,5,6,7,8,9};
    //vector<int>::iterator itr; 

    cout<<"using the forward loop iterator"<<endl;
    for(auto itr = vec1.begin(); itr < vec1.end(); itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl;

    //vector<int>::reverse_iterator itr2; //syntax to create reverse iterator
    cout<<"using the backward loop iterator"<<endl;
    for(auto itr2 = vec1.rbegin(); itr2 < vec1.rend(); itr2++){
        cout<<*(itr2)<<" ";
    }
    cout<<endl;

    // there is something called AUTO keyword where we dont need to provide the datatype, just provide auto
    // compiler will understand the datattype only available in modern c++

    // instead of line 7 and 15 i have directly used auto keyword which compiler knows we are creating iterators
}