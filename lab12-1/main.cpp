#include "Part1.h"
using namespace std;
int main()
{
Base* ptr = new Base;
ptr -> testFunction (); // prints "Base class"
delete ptr;
ptr = new Derived;
ptr -> testFunction (); // prints "Base class" because the base class
// function is not virtual
delete ptr;
return 0;
}
//Now modify the code with the following (all other code should remain the same).
class Base
{
public:
virtual void testFunction ();
};
