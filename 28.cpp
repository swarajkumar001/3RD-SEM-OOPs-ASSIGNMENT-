//28.	Write a program to illustrate the creation and destruction of objects.

#include<iostream>
using namespace std;
int count = 0;
class test
{
public:
test()
{
count++;
cout<<"Object "<<count<<" created"<<endl;
}
~test()
{
cout<<"Object "<<count<<" destroyed"<<endl;
count--;
}
};
int main()
{
test T1, T2, T3;
return 0;
}
