#include <iostream>
#include <string>
 
class Person {
public:
    std::string name;
    int age;
 
    // Constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
        std::cout << "Constructing: " << name << std::endl;
    }
 
    // Destructor
    ~Person() {
        std::cout << "Destructing: " << name << std::endl;
    }
 
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};
 
int main() {
    Person p1("Praveen", 22);
    Person p2("Amit", 30);
    Person p3("Ravi", 28);
 
    p1.display();
    p2.display();
    p3.display();
 
    // Destructors will be automatically called **here** for p1, p2, p3 (in reverse order of creation)
    return 0;
}
 
