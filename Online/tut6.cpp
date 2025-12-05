#include<iostream>
#include "anu.cpp"
//there are two  types of header files:
//1. system header files: its comes with  compiler
//2. user defined header files: it is written by the programmer
using namespace std;
int main(){
    int a = 4, b = 5;
    cout <<"operation in c++:"<< endl;
    cout<<"following are the  types of operator in c++"<<endl;
    //arithmetic operators:
    cout<<"the value of a+b is  "<<a+b<<endl;
    cout<<"the value of a-b is  "<<a-b<<endl;
    cout<<"the value of a*b is  "<<a*b<<endl;
    cout<<"the value of a/b is  "<<a/b<<endl;
    cout<<"the value of a%b is  "<<a%b<<endl;
    cout<<"the value of a++ is  "<<a++<<endl;
    cout<<"the value of a-- is  "<<a--<<endl;
    //  Assigment operator --> us
    // int a = 3, b = 9;
    // char d = 'd';

    // comparisoon operator
    cout<<"following are the comparison operator in c++"<<endl;
    cout<<"the value of a==b is  "<<(a==b)<<endl;
    cout<<"the value of a!=b is  "<<(a!=b)<<endl;
    cout<<"the value of a>=b is  "<<(a>=b)<<endl;
    cout<<"the value of a<=b is  "<<(a<=b)<<endl;
    cout<<"the value of a<b is  "<<(a<b)<<endl;
    cout<<"the value of a>b is  "<<(a>b)<<endl;

     // logical operator
    cout<<"following are the logical operator in c++"<<endl;
    cout<<"the value of logical and operator  ((a==b) && (a<b)) is  "<<((a==b) && (a<b))<<endl;
    cout<<"the value of logical or  operator  ((a==b) && (a<b)) is  "<<((a==b) && (a<b))<<endl;
    cout<<"the value of logical not operator  (!(a==b) && (a<b)) is  "<<(!(a==b) && (a<b))<<endl;
    
    
    

    return 0;
}