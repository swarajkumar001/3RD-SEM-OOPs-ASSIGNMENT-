/*39.	Define a class Student with data members as rollno and name.
 Derive a class Fees from student that has a data member fees and functions to submit fees and generate receipt.
 . Derive another class Result from Student and display the marks and grade obtained by the student.*/
 
 #include<iostream>
using namespace std;
class student
{
protected:
int rollno;
char name[35];
public:
void get() {
cout<<"Enter roll no. : ";
cin>>rollno;
cout<<"Enter student's name : ";
cin>>name; }
void display() {
cout<<"Roll no. : "<<rollno<<endl;
cout<<"student's name : "<<name<<endl; }
};
class Fees : public student {
int fees;
public:
void get_fees() {
cout<<"Amount to be paid : ";
cin>>fees; }
void receipt() {
display();
cout<<"Amount paid : "<<fees<<endl;
cout<<"PAYMENT DONE"<<endl;
cout<<endl; }
};
class result : public student {
float marks;
float percentage;
int grade
;
public:
void get_marks() {
cout<<"Enter marks obtained : ";
cin>>marks;
}
void display_grade()
{
display();
cout<<"Marks obtained : "<<marks<<" / 600"<<endl;
percentage = (marks/600)*100;
grade = percentage/10;
cout<<"Grade : "<<grade<<endl;
}
};
int main()
{
Fees s1;
s1.get();
s1.get_fees();
cout<<endl<<"**FEE RECIEPT**"<<endl<<endl;
s1.receipt();
result s2;
s2.get();
s2.get_marks();
cout<<endl<<"**RESULT**"<<endl<<endl;
s2.display_grade();
return 0;
}

