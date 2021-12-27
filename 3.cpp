//3.	Write a program to calculate compound interest  given P, R and T.

#include <iostream>
#include <math.h>
using namespace std;
int main( ){
	
 

    double principle, rate , time ;
    
cout<<"enter the principle"<<endl;
cin>>principle;
   
cout<<"enter the rate"<<endl;
cin>>rate;
   
cout<<"enter the time"<<endl;
cin>>time;
 
    /* Calculate compound interest */
    
    double A = principle * (pow((1 + rate / 100), time));
      double CI = A- principle;
 
    cout << "Compound interest is " << CI;
 
    
	return 0;
}
