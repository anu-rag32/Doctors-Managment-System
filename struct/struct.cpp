#include <iostream>
using namespace std;
struct Person{
    string name;
    int age;
    void introduce() {
        cout <<"hi, I'm " << name <<"and I am" <<age <<"yeras old." <<endl;
    }
} ;
int main(){
    Person p1;
    p1.name="anurag";
    p1.age= 19;
    p1.introduce();
    return 0;
}