//34.	Write a program to perform overloading of function call operator



#include <iostream>
using namespace std;
class length {
int kilometer, meter;
public:
length() {}
length(int km, int m) {
kilometer = km;
meter = m; }
length operator()(int x, int y, int z) {
length L;
L.kilometer = x + z;
L.meter = y + z;
return L; 
}
void display() {
cout<<kilometer<<"km &"<<meter<<"m"<<endl; }
};
int main() {
length L1(12, 512), L2;
cout<<"1st length: ";
L1.display();
L2=L1(2, 300, 4);
cout<<"2nd length: ";
L2.display();
return 0; 
}
