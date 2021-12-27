//7.	Write a function factorial to calculate the factorial of a number, write appropriate main function also
#include <iostream>
using namespace std;

int factorial( int m){
	if (m==0 || m==1){
		return 1;
		
	}
	
		
		return factorial(m-1)*m;
	
	
}
int main( ){
	
	int n;
	cout<<" enter the number"<<endl;
	cin>>n;
	 cout<<" factorial of the number is : "<< factorial(n);
	
	
	
	
	return 0;
}


