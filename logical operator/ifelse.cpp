//if.cpp : Defines the entry point for the console applications.
//

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{ 
    int x,y;
     cout <<"enter two numberss"<< endl;
     cin >> x >> y  ;

     cout << x << " ";
     if  (x > y)
     { 
        cout <<"id  larger than";
     }
    else
    { 
        cout <<"is longer than";
    }
    cout<< y << endl;

    if  (x+y > 10)
    cout <<"thanks for  choosing larger numbers" << endl;

    return 0;
}
