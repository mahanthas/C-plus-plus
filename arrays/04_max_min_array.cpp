/* Implement a function to find the maximum and minimum element in an array. */

#include <bits/stdc++.h>
using namespace std;

void find_max_min(int *arr,int size){
    int max = arr[0];
    int min = arr[0];
    for (int i =1;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("the max number in array is %d \n",max);
    for (int i =1;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("the min number in array is %d \n",min);
}

int main(){
    int arr[5] = {1,2,3,3,5};

    find_max_min(arr, 5);
}