#include <iostream>
#include <string>

//base class
class Person{
public:
     std::string name;
    int age;

    //constructor
    Person(std::string n, int a){
        name=n;
        age=a;
    }

        void display() {
            std::cout <<"Name:" <<name <<", age:" <<age <<std::endl;
        }
   
};

//derived class
class Student : public Person{
    public:
    int rollNumber;

    //constructor- calls the base class constructor
    Student(std::string n, int a, int r): Person(n,a){
        rollNumber=r;
    }

    void showStudent() {
        display(); //calls base class method
        std::cout <<"roll number:" << rollNumber <<std::endl; 
    }
};

int main() {
    Student s1("praveen" ,22,101);
    Student s2("amit",30,102);
    Student s3("ravi",28,103);
    
    s1.showStudent();
    s2.showStudent();
    s3.showStudent();

    return 0;
}