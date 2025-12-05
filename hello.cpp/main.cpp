// main.cpp

#include "person.h"

int main() {
    Person p1;
    p1.name = "anurag";
    p1.age = 22;
    p1.introduce();  // This will cause an error if the function is not defined
    Person p2;
    p2.name = "aman";
    p2.age = 30;
   p2.introduce();  // Call the class method

    return 0;
}















