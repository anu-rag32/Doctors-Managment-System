// C++ program to represent distances in meters and centimeters, and add two distances using operator overloading

#include <iostream>
using namespace std;

class Distance  {
    private:
       int meters;
       int centimetres;
public:
   // Constructor to initialize distance
   Distance(int m = 0, int cm = 0)
   {
     meters = m;
     centimetres = cm;
     normalize();
   }
   // Function to normalize the distance (convert excess centimeteres to meters)
   void normalize()
   {
    if(centimetres >= 100){
        meters += centimetres / 100;
        centimetres = centimetres % 100;
    }
}
  // Overload the +operator to add two distance objects
  Distance operator+(const Distance& d)
  {
    Distance temp;
    temp.meters = meters + d. meters;
    temp.centimetres = centimetres + d.centimetres;
    temp.normalize();
    return temp;
  }
    // Fuction to display the distance
    void display() {
        cout << meters << "meters and" << centimetres << "centimeters" << endl;
    }
};

int main()
{
    // Create two distance objects
    Distance d1(4, 80); // 4 meters 80 centimeters
    Distance d2(5, 90); // 5 meters 90 centimeters

    // Add the two distance
    Distance d3 = d1 + d2;

    // Display the results
    cout << "Firts distnace: ";
    d1.display();

    cout<< "Second distance: ";
    d2.display();

    cout << "Total distance: ";
    d3.display();

    return 0;
}