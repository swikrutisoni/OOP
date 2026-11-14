/*An uncaught exception is an exception for which no matching catch handler is found.

In simple words:
- An exception occurs.
- C++ searches for a matching catch block.
- No suitable catch block is found.
- The exception remains unhandled.*/

#include <iostream>
using namespace std;

int main() {

    try {
        throw 10;
    }
    catch (double x) {
        cout << "Double exception caught";
    }

    return 0;
}

/* If the exception is not handled anywhere, C++ calls std::terminate(), which normally terminates the program.

The exact termination behaviour can depend on the configured terminate handler. 


Algorithm: Uncaught Exception
1. Start the program.
2. Execute the try block.
3. An exception occurs.
4. Throw the exception.
5. Search for a matching catch block.
6. If a matching handler is found, execute it.
7. Otherwise, search enclosing scopes and propagate to calling functions.
8. If no matching handler is found, call std::terminate().
9. Program terminates.*/