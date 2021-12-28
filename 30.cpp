/*30.	Create two objects of a class with two integer type members.
 Compare the two operators have same member values.
Using overloaded = operator for comparison.*/
#include<iostream>
#include<string.h>
using namespace std;
class test {
int x,y;
public:
test(int p, int q) {
x=p;
y=q; 
}
test operator== (test &t) {
if(x==t.x&& y==t.y) {
cout<<"values are equal!"<<endl; }
else {
cout<<"values are not equal!"<<endl; }}
};
int main() {
	
test t1(59,85), t2(85,47), t3(59,85);
cout<<"For t1(59,85) & t2(85,47) : ";
t1==t2;
cout<<"For t1(59,85) & t3(59,85) : ";
t1==t3;
return 0; 
}

