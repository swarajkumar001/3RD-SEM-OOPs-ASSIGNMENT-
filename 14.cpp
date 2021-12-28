//14.	Write a program with at least one function made as inline.
#include<iostream>
using namespace std;
inline float cube(float x)
{
return (x*x*x);
}
int main()
{ float a;
cout <<"Enter side of cube: ";
cin >> a;
cout <<"\n volume of cube : "<< cube(a) << endl;
return 0;
}
