#include  <iostream>
using namespace std;
class  car {
    public:
    string name;
    int price ;
    int seats;
};

void print (car c) {
    cout << c.name << "" << c.price << "" << c.seats << endl;
}
int main(){
    car c1 ;
    c1.name="honda city";
    c1.price=1500;
    c1.seats=5;
    

    car c2;
    c2.name="maruti suzuki";
    c2.price=13000;
    c2.seats=8;
    

print (c1);
print (c2);
}


    
        



