#include<bits/stdc++.h>
using namespace std;

int length(string str){
    return str.length();
}

int main(){
    string name = "mahantha swamy";
    cout<<"length of string is : "<<length(name)<<endl;

    //access the charaters of string
    for (int i =0;i<length(name);i++){
        cout<<name[i]<<" ";
    }
    cout<<endl;

    //replace string
    replace(name.begin(),name.end(),'a','k');
    cout<<name<<endl;
}