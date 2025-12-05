#include <iostream>
using namespace std;

void heapexample () {
    int* heapVar = new int;  //  allocated on the heap
    *heapVar = 100;
    cout <<  "Heap values: " << *heapVar <<endl;
    cout <<  "Heap address: " << *heapVar <<endl;
    delete heapVar; // always free heap memory!
} 

    void stackExample() {
        int stackVar = 50;
        cout << "Stack valuess:" << stackVar << endl;
        cout << "Stack address:" << &stackVar << endl;

    }
    int main()  {
        cout <<"=== Stack Example ===" <<  endl;
        stackExample();

        cout <<"\n=== Heap Example ===" <<  endl;
        heapexample();
return 0;
    }

