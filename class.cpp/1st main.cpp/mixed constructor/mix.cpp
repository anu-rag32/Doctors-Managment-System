#include<iostream>
using namespace std;
class student{
    public:
   string name;
   int rno;
   float gpa;

   student(){  //default constructor

   }
   student (int r){
    rno=r;
   }

   student(string s, int r){  //parameterised constructor
    name=s;
    rno=r;
 }

 student(string s, int r, float g){//parameterised constructor
    name=s;
    rno=r;
    gpa=g;
 }

 student(int r, float g, string s){
    rno=r;
    gpa=g;
    name=s;
 }
};
int main(){
    student s1("anurag singh", 76);
    s1.gpa=5.6;
     
   student s2;
   s2.name =  "abhijeet";
   s2.rno = 43;
   s2.gpa=9.9;

   student s3("komal", 17, 8.7);
   
   student s5(35, 5.3,"harshraj");

   student s4 (45);

   student s6 = s1; //deep copy
   s6.name = "kavita";

   student  s7(s1); //copy constructor-  deep copy
   s7.name="kashish";

    cout << s1.name << "" << s1.gpa << "" << s1.rno << endl;
    cout << s2.name << "" << s2.gpa << "" << s2.rno << endl;
    cout << s3.name << "" << s3.gpa << "" << s3.rno << endl;
    cout << s4.name << "" << s4.gpa << "" << s4.rno << endl;
    cout << s5.name << "" << s5.gpa << "" << s5.rno << endl;
    cout << s6.name << "" << s6.gpa << "" << s6.rno << endl;
    cout << s7.name << "" << s7.gpa << "" << s7.rno << endl;
}