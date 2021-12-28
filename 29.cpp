//29.	Write a program to illustrate pointer
// to member and pointer to object concepts of 00P.

#include <iostream>
using namespace std;


class Data
{
    public:
    int a;
    void print() 
    { 
        cout << "a is "<< a<<endl; 
    }
};

int main()
{
    Data d, *dp;
    dp = &d;     // pointer to object
 
    int Data::*ptr=&Data::a;   // pointer to data member 'a'

    d.*ptr=10;
    d.print();

    dp->*ptr=20;
    dp->print();
}

