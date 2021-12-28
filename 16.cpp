/*16.	Create a class named 'Student' with a string variable 'name' and an integer variable 'roll no'.
 Assign the value of roll no as '2' and that of name as "John" by creating an object of the class Student.*/
 
 #include <iostream>
#include<string>
using namespace std;
class Student{
public:
string name;
int roll_no;
string set_name(string n){
name=n;
return n;
}
int set_roll_no(int r){
roll_no=r;
return r;
}
};
int main()

{
Student s;
s.set_name("Jhon");
s.set_roll_no(2);
std::cout<<"Name of Student. ->"<< s.name << std::endl;
std::cout <<"Roll No->"<< s.roll_no << std::endl;
return 0; }


