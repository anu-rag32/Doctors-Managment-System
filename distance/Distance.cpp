// C++ program to represent distances in metres and centimetres , and
// add two distances using operator overloading
#include<iostream>
using namespace std;
class Distance{
    public:
    int metre;
    int centimetre;
    Distance(){}
    Distance(int m, int n){
        metre=m;
        centimetre=n;
    }
    Distance operator +(Distance d1){
        Distance temp;
        temp.metre=this->metre+d1.metre;
        temp.centimetre=this->centimetre+d1.centimetre;
        if(temp.centimetre>99){
            temp.metre++;
            temp.centimetre-=100;
        }
        return temp;
    }
    void Display(){
        cout<<metre<<"m  "<<centimetre<<"cm\n";
    }
};
int main(){
    Distance d1(15,75);
    Distance d2(16,45);
    Distance d3;
    d3=d1+(d2);
    d3.Display();
} 