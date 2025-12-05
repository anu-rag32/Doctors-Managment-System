#include<iostream>
using namespace std;
class student{
    public:
   string name;
   int rno;
   float gpa;

   // parameterised constructor

   student(string s, int r, float g){
    name = s;
    rno=r;
    gpa = g;
   }
};

   int main (){
    student s1("anurag", 116, 7.5);

    cout << s1.name <<  ""  << s1.rno <<  "" << s1.gpa << endl;
return 0;
   }

