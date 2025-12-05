#include<iostream>
using namespace std;
class car {
    public:
    string name;
    int price ;
    int seats;
    string type;
};

int main(){
    car c1 ;
    c1.name="honda city";
    c1.price=1500;
    c1.seats=5;
    c1.type="sedan";

    car c2;
    c2.name="maruti suzuki";
    c2.price=13000;
    c2.seats=8;
    c2.type="hatchbacck";

cout << c1.name << "" <<  c1.price << "" <<  c1.seats << "" << c1.type << endl;
cout << c2.name << "" <<  c2.price << "" <<  c2.seats << "" << c2.type << endl;
}