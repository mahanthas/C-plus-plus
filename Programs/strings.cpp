/*
    Question : 
        1. Take a string as input and count the number of vowels in it.
        2. Write a program to reverse a string with and without using built-in functions.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int vowel_count;
string reversed_str;

int vowels_count(string input){
    for (int i = 0; i <= input.length(); i++)
    {
        char b = input[i];
        if(b == 'a' || b=='e' || b=='i'||b=='o'||b=='u')
        {
            vowel_count++;
        }
        else if(b == 'A' || b=='E' || b=='I'||b=='O'||b=='U')
        {
            vowel_count++;
        }
    }
    return vowel_count;
}

string reverse_with_builtin(string input){
    reverse(input.begin(),input.end()); // to use this builtin function include algorithm library
    return input;
}

string reverse_without_builtin(string input){
    for(int i = input.length() - 1; i >= 0; i--){
        reversed_str += input[i];
    }
    return reversed_str;
}

int main(){
    cout<<"Provide the string to count the vowels: "<<endl;
    string input;
    getline(cin,input);  // this includes whole line with the space 

    vowel_count = vowels_count(input);
    cout << "The vowel counts in provided string is :: "<<vowel_count<<endl;

    reversed_str = reverse_without_builtin(input);
    cout << "The reverse of provided string using without builtin function is :: "<<reversed_str<<endl;

    reversed_str = reverse_with_builtin(input);
    cout << "The reverse of provided string using with builtin function is :: "<<reversed_str<<endl;
}

