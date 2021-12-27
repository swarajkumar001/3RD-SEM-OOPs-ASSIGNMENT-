/*8.	Write a function swap to swap the value of two integer variables.
 Write appropriate main function for the program*/
 #include <iostream>
using namespace std;
int main( ){
	
	
	int var1, var2, temp;
cout<<"Enter two integer"<<endl;
cin>> var1;
cin>>var2;
cout<<"Before Swapping "<<var1<< " & "<<  var2<<endl;

temp = var1;
var1 = var2;
var2 = temp;
cout<<"After Swapping "<<var1<< " & "<< var2;


	return 0;
}
