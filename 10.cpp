//10.	Write a program to perform overloading of area function.
#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
int main()
{
int s,l,b;
float r;
cout<<"Enter side of a square:";
cin>>s;
cout<<"Enter length and breadth of rectangle:";
cin>>l>>b;
cout<<"Enter radius of circle:";
cin>>r;
cout<<"Area of square is "<<area(s);
cout<<"\nArea of rectangle is "<<area(l,b);
cout<<"\nArea of circle is "<<area(r);
}
int area(int s)
{
return(s*s);
}
int area(int l,int b)
{
return(l*b);
}
float area(float r)
{
return(3.14*r*r);
}

