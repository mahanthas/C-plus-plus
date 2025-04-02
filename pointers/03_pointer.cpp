/*
Declare an array of integers and use a pointer to traverse it.

Modify the array values using pointer notation.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,5,7,9};
    int *ptrarr = arr;
    int size = sizeof(arr)/sizeof(*ptrarr);

    printf("%d\n",*ptrarr);
    *(ptrarr + 1) = 7; 
    for(int i =0;i<size;i++){
        printf("%d\n",*(ptrarr+i));
    }
}