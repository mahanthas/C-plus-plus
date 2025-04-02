#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    //initialization of vectors
    vector<int> vec ;
    cout<<"initial size of vector is :"<<vec.size()<<endl;

    //size and capacity of vectors
    vector<int> vec1;
    vec1.push_back(1);
    cout<<"size of vector after adding 1 using push_back is :"<<vec1.size()<<endl; // 1
    cout<<"capacity of vector is :"<<vec1.capacity()<<endl; //1
    vec1.push_back(2);
    cout<<"size of vector after adding 1 using push_back is :"<<vec1.size()<<endl; //2
    cout<<"capacity of vector is after adding two values  :"<<vec1.capacity()<<endl; //2
    vec1.push_back(4);
    cout<<"size of vector after adding 1 using push_back is :"<<vec1.size()<<endl; //3
    cout<<"capacity of vector is after adding three values :"<<vec1.capacity()<<endl; //4
    vec1.push_back(5);
    cout<<"capacity of vector is after adding four values :"<<vec1.capacity()<<endl; //4
    vec1.push_back(8);
    cout<<"capacity of vector is after adding five values :"<<vec1.capacity()<<endl; //8 

    //emplace_back
    vec1.emplace_back(89);
    vec1.emplace_back(90);

    //pop_back
    vec1.pop_back(); //will delete the last element or value of the vector 

    //at() or [] to print the values or respective index
    cout<<"vector value at index 3:  "<<vec1.at(3)<<endl;
    cout<<"vector value at index 5:  "<<vec1[5]<<endl;

    //print all elements in vector 
    for (int val: vec1){
        cout<<val<<" ";
    }
    cout<<endl;

    //front() and back()
    vector<int> vec2 = {1,2,3,4,5,6};
    cout<<"the first element of vector is : "<<vec2.front()<<endl;
    cout<<"the last element of vector is : "<<vec2.back()<<endl;
    
    //vector array with size and same value
    vector<int> vec3(5,-1);
    for (int i: vec3){
        cout<<i<<" ";
    }
    cout<<endl;

    //creating vector with another vector values
    vector<int> vec4(vec3);
    for (int i: vec4){
        cout<<i<<" ";
    }
    cout<<endl;

    //vector erase and Insert and clear and empty
    vector<int> vec5 = {1,2,3,4,5,6,7,8};

    vec5.erase(vec5.begin()); // here we cant directly provide the index number we can use iterators(will be studied in next program)
    cout<<"after erasing the vector"<<endl;
    for (int i: vec5){
        cout<<i<<" ";
    }
    cout<<endl;

    vec5.insert(vec5.begin()+2,100); // this is used to insert an element at specific place or index
    cout<<"after inserting element a vector"<<endl;
    for (int i: vec5){
        cout<<i<<" ";
    }
    cout<<endl;

    vec5.clear(); // here it will clear the vector and its size but doesnt clear the capacity 
    cout<<"after clearing a vector"<<endl;
    for (int i: vec5){
        cout<<i<<" ";
    }
    cout<<endl;

    //vec5.empty(); // this is used to check whether the vector is empty or not 
    cout<<"after emptying a vector is :  "<<vec5.empty()<<endl;

    return 0;
}