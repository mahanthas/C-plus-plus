#include<bits/stdc++.h>
using namespace std;

void pattern_one(int num){
    for (int i = 1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern_two(int num){
    for (int i =num;i >=1;i--)
    {
        for(int j =i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    pattern_one(5);
    pattern_two(4);
}