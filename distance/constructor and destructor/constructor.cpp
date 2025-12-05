#include <iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    
    Person(string n, int a){
        name=n;
        age=a;
    }
        void introduce() {
            cout<< "Hii, I'm" <<name <<"and I'm" << age <<"years old." <<endl;
        }

    };

int main(){
    Person p1("Aayush", 21);
    Person p2("Harsh", 20);
    p1.introduce();
    p2.introduce();
    return 0;
}