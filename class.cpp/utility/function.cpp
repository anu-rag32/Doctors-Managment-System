#include<iostream>
#include"utility.h"
using namespace std;
int main (){
    int x;
   cout<<"Enter a number"<<endl;
   cin>>x;
   if(IsPrime(x)) cout<<x<<" is prime number "<<endl;
   else cout<<x<<" is not prime"<<endl;
   if(Is2MorePrime(x)) cout<<x<<" +2 is prime number "<<endl;
   else cout<<x<<" +2 is not prime"<<endl;
   return 0;
}