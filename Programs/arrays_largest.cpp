/* 
    Question : 
            1. Create an array of 5 integers, take input from the user, and print the array in reverse order.
            2. Write a program to find the largest element in an array.
*/
#include <iostream>
using namespace std;

const int arr_size = 5; // using this as a global variable
int arr[arr_size];
int reversed_arr[arr_size];

void array_in_reverse(){
    cout<<"Enter the 5 integers that need to be added into array and reversed : "<<endl;
    for (int i = 0; i<arr_size; i++){
        cin>>arr[i];
    }
    cout<<"the array is : ";
    for (int i = 0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Reversing the array :"<<endl;
    for(int i = (arr_size -1);i >=0 ; i--){
        reversed_arr[i] = arr[i];
        cout<<reversed_arr[i]<<" ";
    }
    cout<<endl;
}

void largest_number(){
    cout<<"Finding the largest number from the array : "<<endl;
    int largest = arr[0]; //here we need to assume that first element is largest number
    for (int i = 0 ; i < arr_size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"The Largest number among the array is : "<<" "<<largest<<endl;
}

int main(){
    array_in_reverse();
    largest_number();
}