/*There are three major stages:
1. Throwing an exception.
2. Searching for a matching catch handler.
3. Handling the exception.

1. Throwing an exception
When an exceptional condition occurs, the programmer uses the throw keyword to signal an exception.
The throw statement immediately transfers control away from the current execution path.

2. Searching for a matching catch block
After an exception is thrown, C++ searches for a suitable catch handler.

For example:
try {
    throw 10;
}
catch (double x) {
    cout << "Double exception";
}
catch (int x) {
    cout << "Integer exception";
}


Here:
- The thrown value is an integer.
- The first catch expects a double, so it isn't a match.
- The second catch expects an int, so it handles the exception.
Output:
Integer exception

3. Handling the exception
Once a matching catch block is found:
- Control transfers to that catch block.
- The thrown value is made available through its parameter.
- The catch block executes.
- After the catch block finishes, execution continues after the entire try-catch structure.

4. Algorithm of Exception Handling
Algorithm: Handling an Exception in C++
1. Start the program.
2. Enter the try block.
3. Execute the statements inside the try block.
4. Check whether an exceptional condition occurs.
5. If no exception occurs, skip the catch blocks.
6. If an exception occurs, throw the exception.
7. Search for a matching catch handler.
8. If a matching handler is found, transfer control to it.
9. Execute the catch block.
10. Continue execution after the try-catch structure.
11. If no matching handler is found, continue searching in an enclosing try block or propagate the exception to the caller.
12. If no handler is found anywhere, the program calls std::terminate().

5. Stack Unwinding
 Stack unwinding is a concept which says that if a function throws an exception and if this function
 Does not handle the exception Then the control goes to caller , and if 
 The caller also does not handle the exception Then the control goes to the
 Caller of the caller and we keep on searching the handler for the exception
 In the function call stack until The handler is found
 
 #include <iostream>
using namespace std;

void functionB() {
    cout << "Inside B\n";
    throw 10;
}

void functionA() {
    cout << "Inside A\n";
    functionB();
}

int main() {
    try {
        functionA();
    }
    catch (int x) {
        cout << "Exception caught: " << x;
    }

    return 0;
}
    
Inside A
Inside B
Exception caught: 10

Term->	Meaning
Throwing->	Signalling an exception using throw
Handler search ->	Finding a matching catch block
Propagation->	Passing an exception to the calling function
Stack unwinding ->	Exiting scopes and destroying local automatic objects
Termination ->	Calling std::terminate() if no handler is found*/ 