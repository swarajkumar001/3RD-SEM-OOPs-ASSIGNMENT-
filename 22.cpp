/*
22.	Create a class time to store time in hours and minutes. Write a program that can read
 values for the class objects and add one object with another object storing the result in third
  object. Use object as arguments to sum()  function and object return type from sum()
   function to assign the 
sum to the third object.
*/

#include <iostream>
#include <ctime>
using namespace std;
class TIME{
int H,M;
public:
void read_time(){
std::cout <<"ENTER Hour Value \n"<< std::endl;
std::cin >> H;
std::cout <<"ENTER Minute Value \n"<< std::endl;
std::cin >> M;
}
TIME add_time(TIME a,TIME b){
TIME c;

c.H=a.H+b.H;
c.M=a.M+b.M;
while(c.M>59){
c.M=c.M-60;
c.H++;
}
std::cout <<"ADded Time is "<<c.H <<" Hours and "<< c.M
<<" Minute"<< std::endl;
return c;
}
};
int main(){
TIME t1,t2,t3;
t1.read_time();
t2.read_time();
t3=t3.add_time(t1,t2);
return 0; }

