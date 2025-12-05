#include<iostream>

using namespace std;
int glo = 6; // this is global variable data-types.
void sum() {
    int a;
    cout<<glo;
}

int main()  {
    int glo = 9; //  this  is local variable datatypes.
     glo = 78;
// int a = 14;
// int b = 15;
int a = 14, b = 15;
float pi = 3.14;
char c = 'd'; 

sum();
cout<<glo; 
//cout<<"this is tutorial 4. \n here the value of a is "<<a<<". \n the value  of b  is "<<b;
//cout<<\n the value of pi is "<<pi;
//cout<<\n  the value of c is "c;
return 0;
}