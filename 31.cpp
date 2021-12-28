//31.	Create a class FLOAT that contains one float data member. 
//Overload all the four arithmetic operators so that they operate on the objects of FLOAT.

#include<iostream>
using namespace std;
class Float
{
float n;
public:
Float() {}
Float(float n)
{
this->n = n;
}
Float operator + (Float t)
{
Float f;
f.n = n + t.n;
return f;
}
Float operator - (Float t) {
Float f;
f.n = n - t.n;
return f;
}
Float operator * (Float t) {
Float f;
f.n = n * t.n;
return f;
}
Float operator / (Float t) {
Float f;
f.n = n / t.n;
return f;
}
void display()
{
cout<<n<<endl;
}
};
int main()
{
Float f1(14.2), f2(17.5), f3(0);
f3 = f1 + f2;
cout<<"Addition : ";
f3.display();
f3 = f1 - f2;
cout<<"Subtraction : ";
f3.display();
f3 = f1 * f2;
cout<<"Multiplication : ";
f3.display();
f3 = f1 / f2;
cout<<"Division : ";
f3.display();
return 0;
}
