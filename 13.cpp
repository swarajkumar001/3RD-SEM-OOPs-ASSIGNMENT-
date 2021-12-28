//13.	Write a program to show the use of return by reference.


#include <iostream>
using namespace std;
int n;
string str ;
int& fun()
{
return n;}
string& test()
{ return str; }
int main()
{
fun() = 12;
cout << n <<endl;
test() = "\nWe are cool family.";
cout << str <<endl; 
return 0;
}
