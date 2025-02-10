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

    // This unordered map will store the cumulative sum of 0s and 1s
    unordered_map<int, int> prefix_sum_map;
    prefix_sum_map[0] = 1;  // Base case: There's one way to get a balance of 0 before starting

    int sum = 0;  // This keeps track of the cumulative sum (number of 1s - number of 0s)

    for (char c : s) {
        // Update the sum for 1's and 0's
        if (c == '1') {
            sum++;
        } else {
            sum--;
        }

        // If this sum has been seen before, it means there are substrings that balance out to 0
        if (prefix_sum_map.find(sum) != prefix_sum_map.end()) {
            count += prefix_sum_map[sum];
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
