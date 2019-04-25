// Part1.h. Note, this header file will have TWO classes declared.
#include <iostream>
using namespace std;
//Now modify the code with the following (all other code should remain the same).
class Base
{
public:
virtual void testFunction ();
};
class Derived : public Base
{
public:
void testFunction ();
};
