#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
class Person {
    public:
       string name = "Jhon";
};

// This is a free function
void greet(Person p) {
    cout << "Hello" << p.name << "from free function!" << endl;
}

int main() {
    Person p;
    greet(p);  // Call free function with object
    return 0;
}