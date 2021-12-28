/*17.	Write a program to print the area of a rectangle by creating a class named 'Area' 
having two functions.First function named as 'readData' takes the length and
 breadth of the rectangle as parameters and the second function named as 
 'calculateArea' returns the area of the rectangle. Length and breadth of the rectangle are entered 
through keyboard.*/

#include <iostream>
using namespace std;
class Area{
public:
int len,brth;
void readData(int l, int b){
len=l;
brth=b;
}
double calculateArea(){
return len*brth;
}
};
int main()
{
Area rect;
std::cout<<"Enter Data-> length and Breadth\n"<< std::endl;
int len,brth;

std::cin >> len;
std::cin >> brth;
rect.readData(len,brth);
std::cout <<"Area of Rectangle->"<< rect.calculateArea() <<
std::endl;
return 0; }
