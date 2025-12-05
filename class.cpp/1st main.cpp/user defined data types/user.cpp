#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;

};
int main(){
    student s1;
    s1.name = "anurag";
    s1.rno = 163;
    s1.gpa = 7.5;
    
    student s2;
    s2.name = "kushh";
    s2.rno = 567;
    s2.gpa = 8;

    cout << s1.name << "" << s1.rno << "" << s1.gpa << endl;
    cout << s2.name << "" << s2.rno << "" << s2.gpa << endl;
}
