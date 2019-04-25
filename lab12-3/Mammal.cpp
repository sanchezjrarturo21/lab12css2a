// Mammal.cpp
#include "Mammal.h"
Mammal::Mammal():itsAge(1)
{
cout << "Mammal constructor..." << endl;
}
Mammal::~Mammal()
{
cout << "Mammal destructor..." << endl;
}
void Mammal::move() const
{
cout << "Mammal moves a step!" << endl;
}
void Mammal::speak() const
{
cout << "What does a mammal speak? Mammilian!" << endl;
}
void Dog::move() const
{
  cout << "Dog moves!!" << endl;
}
void Dog::speak() const
{
  cout << "Dog spOOOOOOOOKKKKK!!!" << endl;
}
