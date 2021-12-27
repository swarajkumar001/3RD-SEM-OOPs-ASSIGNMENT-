//Write a function to perform sorting using bubble sort algorithm.
// Use arrays to store the list of numbers. Also write main() function to read contents and display output

#include <iostream>
using namespace std;
int main( ){
	
	
	
	int input[1000], n;
	cout<< "enter the number of element which y0u have to sort"<<endl;
	cin>> n;
	cout<< " enter the  element which you have to sort"<<endl;
	for(int i=0;i<n;i++){
		cin>> input[i];
	}
	
    cout<<endl<<  " entered element before sorted is "<<endl;
    
    for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	
	for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;i++){
            if(input[i]>input[i+1]){
                int temp=input[i];
                input[i]=input[i+1];
                input[i+1]=temp;
            }
        }
    }
    
	
	cout<<endl<< " sorted elements are "<<endl;
	
    for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	
	return 0;
}





