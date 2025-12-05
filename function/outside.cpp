#include <iostream>
#include <string>
class Person{
public:
   std::string name;
    int age;
    
    Person(std::string n, int a);
        
    
        void introduce(); 

    };
    Person::Person(std::string n, int a) {
        name=n;
        age=a;
    }
    void Person::introduce(){
        std::cout<<"hii I'm" <<name <<"and I'm" <<age <<"yeras old." <<std::endl;
    }

int main(){
    Person p1("Aayush", 21);
    Person p2("Harsh", 20);
    p1.introduce();
    p2.introduce();
    return 0;
}