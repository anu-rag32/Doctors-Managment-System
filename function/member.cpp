#include <iostream>
using namespace std;
class Person{
    public:
          void sayHello(){
            cout<<"hello from member function!" <<endl;
          }
};
int main()
{
    Person p;
    p.sayHello();
    return 0;
}
