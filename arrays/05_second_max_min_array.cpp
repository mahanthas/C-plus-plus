/*  Without sorting, find the second largest and second smallest elements in an array.  */
#include <bits/stdc++.h>

using namespace std;

void second_max_min(int *arr,int size){
    int max=arr[0];
    int second_max = arr[0];
    int min = arr[0];
    int second_min = arr[0];

    for(int i= 1;i<size;i++){
        if(arr[i] > max){
            second_max = max;
            max =arr[i];
        }
        else if(arr[i]>second_max && arr[i] != max){
            second_max = arr[i];
        }
    }
    printf("Largest number is : %d \n",max);
    printf("Second largest number is : %d \n",second_max);

    for(int i= 1;i<size;i++){
        if(arr[i] < min){
            second_min = min;
            min =arr[i];
        }
        else if(arr[i]<second_min && arr[i] != min){
            second_min = arr[i];
        }
    }
    printf("Smallest number is : %d \n",min);
    printf("Second Smallest number is : %d \n",second_min);
}

int main(){
    int arr[5] = {8,3,5,7,9};

    second_max_min(arr,5);
}