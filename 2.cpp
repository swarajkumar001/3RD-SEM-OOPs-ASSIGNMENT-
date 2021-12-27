//2.	Write a program to calculate average of five numbers given by user.
#include <iostream>
using namespace std;
int main( ){
	int num; 
    int sum=0;
  
    float average;   
    
    cout<<"Enter five numbers:" <<endl; 
    
    for(int i=0; i<5; i++){    
        scanf("%d", &num);
        sum = sum + num;   
    }
    
    average = sum/(float)5;  
    
    cout<<"Average  of five numbers is "<<average<<endl; 
}

