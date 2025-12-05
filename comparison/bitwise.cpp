#include <iostream>
using namespace std;

int main (){
    int a = 5; // binary: 0101
    int b = 3; // binary: 0011

    cout  << "a & b:" << (a & b) << endl;    //o1o1  & 0011 = 0011 -> 1
    cout  << "a | b:" << (a | b) << endl;   //o1o1 | 0011=0111 -> 7  
    cout  << "a ^ b:" << (a^ b) << endl;   //o1o1 ^ 0011= 0110 -> 6
    cout  << "~a :" << (~a ) << endl;   // ~o1o1 = 0011 -> -6 (in  2's complement)
    cout  << "a << b:" << (a << b) << endl;   //o1o1 -> 0011= 10  (shift lleft by  1)
    cout  << "a >> b:" << (a >> b) << endl;   //o1o1 -> 0011=  2 (shift  right by 1)

    return 0;


}

// create a c++ program to represent   disances in meterr and cm and two distances  using operator over loading.  