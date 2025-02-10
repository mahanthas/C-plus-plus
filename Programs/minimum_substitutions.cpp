/*
For each word in a list of words if any two afjacent characters are equal change one of them

Determine the minimum number of substituions so the final string contains no adjacent equal characters 


Example:
Add , boook , break 

Output:
1, 1, 0 

In c++
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to calculate the minimum substitutions for a string
vector<int> minSubstitutions(const string& word) {
    vector<int> results;
    int substitutions = 0;
    string modifiedWord = word; // To keep track of changes

    for (size_t i = 0; i < modifiedWord.size(); ++i) {
        // Check if two adjacent characters are equal
        if (modifiedWord[i] == modifiedWord[i - 1]) {
            ++substitutions;
            // Change the current character to a different one
            modifiedWord[i] = (modifiedWord[i] == 'a') ? '*' : 'a';
        }
    }
    results.push_back(substitutions);

    return results;

}

int main() {
    //read the input from the terminal
    int n;
    cout << "Enter the number of words: ";
    cin >> n;

    // Output array to store results
    vector<int> results;

    vector<string> words(n);
    cout << "Enter the words:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    for (const string& word : words) {
        vector<int> results = minSubstitutions(word);
        if (results.empty()) {
            cout << "0";
        } else {
            for (int res : results) {
                cout << res << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
