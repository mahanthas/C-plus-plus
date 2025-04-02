#include<bits/stdc++.h>
using namespace std;

/*
1. Write a program that:
    Declares an integer array of size 10
    Takes user input for 10 elements
    Prints the array elements
    Finds the largest element in the array 
*/

/*
2. Write a function that sorts an array using std::sort.
   Implement a function that searches for a number using std::find.
*/

int largest_element(int* arr,int size){
    int largest = arr[0];
    for(int i =1;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

void sort_array(int arr[],int size){
    std::sort(arr,arr+size,greater<int>());
    for(int i =0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10] = {};

    cout<<"provide the elements of an array: \n";
    for(int i =0;i<10;i++){
        cin>>arr[i];
    }
    for(int i =0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"the largest element the array is : "<<largest_element(arr,10)<<endl;

    int arr1[10] = {10,50,30,60,7,8,9,3,270,40};
    sort_array(arr1,10);

}