/*37.	Write a program to convert time type object to an Integer value and integer
 type value to object of time type. 
Use appropriate data type conversion functions to perform the required conversion*/


#include<iostream>
using namespace std;
class time
{
int h, m;
public:
time() {}
time(int t)
{
h = t/60;
m = t%60;
}
void get()
{
cin>>h>>m;
}
void display()
{
cout<<h<<"hrs&"<<m<<" min"<<endl;
 }
operator int()
{
int t = h*60 + m;
return t;
}
};
int main()
{
int a;
cout<<"Enter minutes : "<<endl;
cin>>a;
time t1 = a;
t1.display();
cout<<"Enter time in hours and minutes : ";
t1.get();
a = t1; //casting operator called
cout<<"Time in minutes : "<<a;
return 0;
}
