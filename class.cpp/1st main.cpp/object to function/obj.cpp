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
    void change (car c){
       c.name = "Audi A8";

    }

    int main  (){
        car c1;
        c1.name="maruti";
        c1.price=16666;
        c1.seats=9;

     print(c1);
     change (c1);
     print(c1);
    }