/*
Write a program to calculate the sum of all elements in an array.
*/
#include<bits/stdc++.h>
using namespace std;

double sum(vector<int> arr,int size){
    double sum = 0;
    for (int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr = {};
    int size;
    cout<<"provide size of an array"<<endl;
    cin>>size;
    arr.resize(size);
    for (int i= 0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"sum of the given array is : "<<sum(arr,size)<<endl;
}