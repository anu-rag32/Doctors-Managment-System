#include <iostream>
using namespace std;
  
int main()
{

    int x;
    cout <<"enter a print"<< endl;
    cin >> x;
    
    bool prime = true;
    int i = 2;

    while(i <= x/i)
  {
    int factor = x/i;
    if (factor*i == x)
   if (factor*i == x)
    {
        cout << "factor  found;" << " * "  << factor << endl;
        prime = false;
    }
    i  = i  + 1;
    }

    cout <<  x << " is ";
    if (prime)
    cout <<  "not prime" << endl;
    else 
    cout  << "not prime" << endl;
    return  0;
}