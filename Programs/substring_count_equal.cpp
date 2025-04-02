/*
A substring is a group of contiguous characters in a string for instance all substring of abc are 
[A,b,c,ab,bc,abc]

Given a binary representation of a number determine the total number of substrings present that matches follwing condition 

1. The 0s and 1s are grouped consecutive ( eg 02,10,0011,1100,000111,etc)
2. The number of 0s in the substring is equal to the number of 1s in the substring 
*/

// #include <iostream>
// #include <string>
#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

int countBalancedSubstrings(const string& s) {
    // To store the number of substrings that satisfy the condition
    int count = 0;
    int n = s.size();

    int zeros = 0;
    int ones = 0;
    for(int i = 0; i<n;i++){
        if(s[i] == '0'){
            zeros++;
        }
        else{
            ones++;
        }
        if(zeros == ones){
            count++;
        }
    }

    return count;
}

int main() {
    string binary;
    cout << "Enter the binary representation: ";
    cin >> binary;

    int result = countBalancedSubstrings(binary);
    cout << "Total number of balanced substrings: " << result << endl;

    return 0;
}
