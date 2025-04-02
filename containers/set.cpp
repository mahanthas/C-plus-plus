#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> set1;
    vector<int> vec1;

    cout<<"provide the size of vector: \n";
    int size ;
    cin>>size;
    vec1.resize(size);
    cout<<"provide the elements to store in vector"<<endl;
    for(int i = 0;i<size;i++){
        cin>>vec1[i];
    }

    for(int i=0;i<size;i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;

    set1 = set<int>(vec1.begin(),vec1.end());

    int set_size = set1.size();
    for (int num : set1){
        cout<<num<<" ";
    }
}