#include <iostream>
using namespace std;

int main () {
    int a = 42;
    int* Ageptr = &a;                                     // pointer to a

    cout << " Address of  a:" << &a << endl;
    cout << " pointers stores :" << Ageptr << endl;
    cout << " value via indirection :" << *Ageptr << endl;

    *Ageptr = 99;                                           // changing value via pointer
    cout << "updated value of a:" << a << endl;
    return 0;
}