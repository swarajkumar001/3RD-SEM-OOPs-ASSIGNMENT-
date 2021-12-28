//25.Write a program to initialize an object with another using copy constructor.
#include <iostream>
using namespace std;
class Fruits{
string name; 
public:
Fruits(string f)
{ 
name=f;

}
Fruits(const Fruits &m){ this->name=m.name;
}
void show(){
std::cout<< this->name <<std::endl;;
}
};
int main()
{
Fruits Apple("Apple");

 Apple.show();
Fruits Banana("Bananna");
 Banana.show();
Fruits temp=Apple;
 temp.show();
return 0;
 }
