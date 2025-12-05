#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "utility.h";

int main()
{
    int i = 2;
    if(i = 3)
       cout << " i is 3" << endl;
    cout << "i " << i << endl;
    if(i=3)
        cout << "i is 3" << endl;
    cout << "i" << i << endl;
    i=4;
    if(3==i)
       cout << "i is 3" << endl;
    cout << "i" << i << endl;

    int p = foo("whatever");
    if(p)
      something;
    if(p= foo("something else"))
      something();

    cout << "enter a number" << endl;
    cin >> i;

    cout << i << "is";
    if(!IsPrime(i))
       cout << "not";
    cout << "prime." << endl;

    int j;
    cout << "enter a second number" << endl;
    cin >> i;

    cout << i << "is";
    if((j!=0) && !(i % j == 0))
       cout << "not";
    cout << "a mutiple of" << j << endl;

    return 0;

}