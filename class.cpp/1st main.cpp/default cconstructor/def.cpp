#include<iostream>
using namespace std;
class student{
    public:
   string name;
   int rno;
   float gpa;

   student(){  //default constructor

   }
   student (string s, int r, float g){   //parameterised constructor
    name=s;
    rno=r;
    gpa=g;
   }
};
   int main(){
    student s1("anurag singh", 63,7.5);
     
    student s2;
    s2.name="aman";
    s2.rno=77;
    s2.gpa=7.6;

    cout << s1.name << "" << s1.gpa << "" << s1.rno << endl;
    cout << s2.name << "" << s2.gpa << "" << s2.rno << endl;
   
}