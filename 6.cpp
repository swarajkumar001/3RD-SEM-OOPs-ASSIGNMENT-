//6.	Write a function to calculate the power of a number raised to another number using function.
// Write appropriate main() function to read and display the result. [ x^y ].....
#include <iostream>
using namespace std;
int main( ){
	
	 int x,y;
	 cout<<" enter tyhe value of base : "<<endl;
	 cin>>x;
	 cout<< " enter the valuse of power "<<endl;
	 cin>>y;
	 int power=1;
	 for( int i=1;i<=y;i++){
	 	power=power*x;
	 }
	 cout<< " The required will be : "<< power;
	return 0;
}
