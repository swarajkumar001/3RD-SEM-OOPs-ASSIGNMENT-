/*11.	Write a program with overloaded volume function. Use 
volume function to calculate the volume of a cube, cone, sphere etc.*/

#include<iostream>
using namespace std;
float vol(int,int);
float vol(float);
int vol(int);
int main()
{
int r,h,a;
float r1;
cout<<"Enter radius and height of a cone:";
cin>>r>>h;
cout<<"Enter side of cube:";
cin>>a;
cout<<"Enter radius of sphere: ";
cin>>r1;
cout<<"Volume of cone is "<<vol(r,h);
cout<<"\nVolume of cube is "<<vol(a);
cout<<"\nVolume of sphere is "<<vol(r1);
return 0;
}
float vol(int r,int h) //volume of cone
{
return((3.14*r*r*h)/3);
}
float vol(float r1) //volume of sphere

{
return((4*3.14*r1*r1*r1)/3);
}int vol(int a) //volume of cube
{
return(a*a*a);
}
