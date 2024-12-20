/*
    Question : 
        1. Write a program to demonstrate the use of pointers by swapping two numbers using pointer variables.
        2. Create a pointer to an array and print its elements using the pointer.
*/

#include <iostream>
using namespace std;

// *a == 500 --> address; 5--> value
// *b == 600 --> address; 6--> value

void swap_nums_with_pointers(int* a, int* b){
    int* c;

    *c = *a;
    *a = *b;
    *b = *c;

    cout<<"The Swapped numbers are : "<<*a<<": "<<*b<<endl;
}

void print_elements_using_pointer(){
    cout<<"Add the elements to array: ";
    int *array;
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    array = new int[size]; //allocate the size to the array
    cout<<"Enter the elemments : "<<endl;
    for(int i =0; i < size;i++){
        cin>>array[i];
    }

    for (int i = 0; i < size; i++) {
        cout << *(array + i) << " "; // *(array + i) accesses the i-th element
    }
    cout << endl;
    
}

int main(){
    cout<<"Provide numbers to be swapped :"<<endl;
    int a, b;
    cin>>a;
    cin>>b;

    swap_nums_with_pointers(&a,&b);  // here provide the address as input 

    print_elements_using_pointer();
}