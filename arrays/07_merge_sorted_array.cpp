/*  Given two sorted arrays, merge them without using an extra array.

Example: arr1[] = {1,3,5}, arr2[] = {2,4,6} → Output: {1,2,3,4,5,6} */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i =0;i<size2;i++){
        arr1[size1 + i] = arr2[i];
    }
    printf("size of 1st array : %d, size of 2nd array : %d\n",size1,size2);
    printf("%d\n",sizeof(arr1));
    printf("%d\n",sizeof(arr1[0]));
    printf("%d\n",(12/4));

    for(int i = 0;i<size1+size2;i++){
        printf("%d",arr1[i]);
    }
}