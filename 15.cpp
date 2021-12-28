//15.	Create a structure data type with data items roll number, name, and total marks.
//Write main function to read data for two students and also display the stored data.

#include <iostream>
using namespace std;
struct student
{
char name[100];
int roll;
float total_marks;
} s[2];
int main()
{
cout <<"Enter information of 2 students: "<< endl;
for(int i = 0; i < 2; ++i)
{
cout <<"Enter roll number: ";
cin >> s[i].roll;
cout <<"Enter name: ";
cin >> s[i].name;
cout <<"Enter marks: ";
cin >> s[i].total_marks;
cout << endl;
}
cout <<"Displaying Information of 2 students: "<< endl;
for(int i = 0; i < 2; ++i)
{
cout <<"\nRoll number: "<< s[i].roll << endl;
cout <<"Name: "<< s[i].name << endl;
cout <<"Marks: "<< s[i].total_marks << endl;
}
}

