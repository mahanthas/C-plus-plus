#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int size){
    int temp;
    for(int i =0;i<size-1;i++){
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {10,20,78,90,10,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of array is :"<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    bubblesort(arr,size);

    int arr2d[][3] ={{1,2,3},
                    {2,4,5},
                    {5,8,9}}; 

    cout<<arr2d[1][1]<<endl;
}