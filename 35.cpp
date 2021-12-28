//35.	Write a program to perform overloading of subscripting operator.


#include<iostream>
using namespace std;
const int size = 15;
class array
{
int a[size];
public:
array()
{
register int i;
for(i=0; i<size; i++)
{
a[i]=i;
}
}
int&operator[] (int i)
{
if(i>size)
{
cout<<"Index out of bound"<<endl;
return a[0];
}
return a[i];
}
};
int main()
{
array A;
cout<<A[1]<<endl;
cout<<A[4]<<endl;
cout<<A[20]<<endl;
return 0;
}

