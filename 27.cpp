//27.	Write a program to show the highest scorer in a test out of three students who appeared in a exam. 
//Use this pointer to refer to objects. (USER INPUT)
#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
int roll_no;
string name;
float marks;
student(int x, string y, float z)
{
this->roll_no = x;
this->name = y;
this->marks = z;
}
void display()
{
cout<<"Roll no. : "<<roll_no<<endl<<"Name : "<<name<<endl<<"Marks : "<<marks<<endl;
}
student&maximum(student &s1, student &s2)
{
if(s1.marks >= s2.marks && s1.marks >= marks)
return s1;
else if(s2.marks >= s1.marks && s2.marks >= marks)
return s2;
else
return *this;
}
};
int main()
{
student s1(1,"Aditi",90), s2(2,"Ankita",75), s3(3,"Ashi",95);
student s = s1.maximum(s2,s3);
cout<<endl<<"## Topper ##"<<endl;
s.display();
return 0;
}

