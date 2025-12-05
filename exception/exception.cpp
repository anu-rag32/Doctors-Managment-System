#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
    throw runtime_error("cannot divide by zero!");
    return a/b;
}

int main (){
    try {
        int result = divide ( 10, 5);
        cout << "result:" << result << endl;
    }
    catch (const exception& e) {
        cout << "error:" << e.what() << endl;
    }
    return 0;
    }
    