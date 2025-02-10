// Let's break down the basic structure of a C++ program and key syntax elements.


#include <iostream>  // Include library for input/output operations
using namespace std; // Use standard namespace

int main() {         // Entry point of the program
    cout << "Hello, World!" << endl; // Print output to the console
    return 0;        // Indicate that the program ended successfully
}

/*
Explanation of the Code

#include <iostream> --> This is a preprocessor directive that includes the Input/Output stream library to use cin, cout, etc.

using namespace std; --> Allows direct use of std library functions (like std::cout) without needing the std:: prefix.

int main()  --> The main function is where the program starts execution.

cout << "Hello, World!" << endl;  --> cout is used for output.

<< is the insertion operator to pass data to cout.
endl moves the cursor to the next line.

return 0;  --> Indicates that the program ended successfully.

*/