/*12.	Write a program to calculate simple interest. Use default argument for rate. 
Write main function to exhibit the use of default argument*/
#include <iostream>
using namespace std;
float si(int p, int n, int r=5)
{
return (p*n*r)/100;
 }
int main()
{
int p, n, r;
cout<<"Enter principal amount: ";
cin>>p;
cout<<"Enter duration (in years): ";
cin>>n;
cout<<"Simple interest = "<<si(p, n);
return 0; 
}
