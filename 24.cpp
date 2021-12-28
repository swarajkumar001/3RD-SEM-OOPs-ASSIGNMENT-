//24.	Write a program to add two complex number using a friend function. 
//Use appropriate constructor function to initialize the object.

#include<iostream>
using namespace std;
class Complex
{
private:
float real;
float img;
public:
Complex()
{
real = 0;
img = 0;
}
Complex(float r, float i)
{
real = r;
img = i;
}
void set()
{

cout<<"Enter real  part";
cin>>real;
cout<< " enter the imaginary part : ";
cin>> img;

}
friend Complex add(Complex c1, Complex c2);
void display()
{
cout<<"("<<real<<" + i "<<img<<")"<<endl; }
};
Complex add(Complex c1, Complex c2) {
Complex t;
t.real = c1.real + c2.real;
t.img = c1.img + c2.img;
return t;
}
int main()
{
Complex c1, c2, c3;
c1.set();
c2.set();
c3 = add(c1, c2);
cout<<"Sum is : ";
c3.display();
return 0;
}

