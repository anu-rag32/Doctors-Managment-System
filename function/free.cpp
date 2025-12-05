#include <iostream>
using namespace std;
class Person{
    public:
          string name="John";

};
void greet(Person p)
{
    cout<<"hello" <<p.name <<"from free function!" <<endl;
}
int main()
{
    Person p;
    greet(p);
    return 0;
}