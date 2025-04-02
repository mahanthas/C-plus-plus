/* 
Given an array and an integer k, rotate the array left by k positions.

Example: arr[] = {1,2,3,4,5}, k=2 → Output: {3,4,5,1,2}
*/
#include <bits/stdc++.h>

using namespace std;

void left_rotate_array(int arr[],int k, int size){
    reverse(arr,arr+k); //here first we will reverse the 0 to k elements in array
    reverse(arr+k,arr + size);  //here we will reverse remaining elements from k to size
    reverse(arr,arr+size);  // here we will reverse whole array so that it rotates k elements to left

    for(int i =0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

void right_rotate_array(int arr[],int k,int size){
    reverse(arr+size-k,arr+size);  // 12345  -> 12354
    reverse(arr,arr+size-k); // 12354  -> 32154
    reverse(arr,arr+size); // 32154  --> 45123

    for(int i =0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int arr1[5] = {1,2,3,4,5};

    left_rotate_array(arr,3,5); // 12345 --> 45123

    right_rotate_array(arr1,3,5);  // 12345  --> 34512
}

// 12345
// 54
// 321
// 45123