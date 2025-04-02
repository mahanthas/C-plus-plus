#include<bits/stdc++.h>

using namespace std;


void get_index_element(int* arr,int index){
    printf("In array the %d element is %d \n",index,arr[index]);
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    get_index_element(arr, 8);

}