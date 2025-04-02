/* Write a function to reverse an array in-place without using extra space. */

#include <bits/stdc++.h>

using namespace std;

void reverse_array(int* arr){
    int arr1[5] = {};
    for(int i=0;i<5;i++){
        arr1[i] = arr[4-i];
    } 
    for(int i=0;i<5;i++){
        printf("%d",arr1[i]);
    } 
    printf("\n\n");
}

void reverse_arr(int* arr, int size){
    int end = size -1;

    for(int i = 0;i<size;i++){
        swap(arr[i],arr[end-i]);
    }
}

int main(){
    int arr[5] = {0,1,2,3,4};

    reverse_array(arr);  // this is using extra space 

    reverse_arr(arr,5);  // this is without using extra space
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    } 
}