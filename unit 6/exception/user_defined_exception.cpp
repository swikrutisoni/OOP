//These are created by programmers to handle application-specific situations.

#include <iostream>
using namespace std;

int main() {
    int marks = -10;

    try {
        if (marks < 0) {
            throw "Invalid marks";
        }
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}

/*Remember this important distinction
- throw does not get skipped. It executes and transfers control.
- Statements after throw inside that try block are skipped.
- The thrown value is transferred to the matching catch parameter.
- Execution resumes after the catch block.*/