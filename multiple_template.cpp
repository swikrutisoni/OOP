#include<iostream>
using namespace std;
/*template <class T1 , class T2>
void display(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

int main(){
    display(5, 6.7);
    display("Hello", 'A');
    return 0;
}*/


/*type + non-type parameters*/
template <class T, int N>
void printArray(T (&arr)[N]) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printArray(intArray);
    printArray(doubleArray);

    return 0;
}

/*benifits: code reusability , flexiblity and fewer duplicate implimentations 
disadvantages: increased complexity, difficulty in debugging, and code bloat*/

/*implmentation of data structures via templates
1. stack

template <class T>
class Stack {
private:
    std::vector<T> elements;
public:
    void push(const T& element) {
        elements.push_back(element);
    }
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }
    T top() const {
        if (!elements.empty()) {
            return elements.back();
        }
        throw std::out_of_range("Stack is empty");
    }
    bool empty() const {
        return elements.empty();
    }
};


