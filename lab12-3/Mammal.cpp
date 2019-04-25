// Mammal.cpp
#include "Mammal.h"
#include <iostream>
using namespace std;
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

void Cat::move() const
{
  cout << "Cat moves!!" << endl;
}
void Cat::speak() const
{
  cout << "Cat spOOOOOOOOKKKKK!!!" << endl;
}

void Horse::move() const
{
  cout << "Horse moves!!" << endl;
}
void Horse::speak() const
{
  cout << "Horse spOOOOOOOOKKKKK!!!" << endl;
}

void GuineaPig::move() const
{
  cout << "GuineaPig moves!!" << endl;
}
void GuineaPig::speak() const
{
  cout << "GuineaPig spOOOOOOOOKKKKK!!!" << endl;
}
Dog::Dog()
{
  cout << "Dog constructor..." << endl;
}
Dog::~Dog()
{
  cout << "Dog destructor..." << endl;
}
Cat::Cat()
{
  cout << "Cat constructor..." << endl;
}
Cat::~Cat()
{
  cout << "Cat destructor..." << endl;
}
Horse::Horse()
{
  cout << "Horse constructor..." << endl;
}
Horse::~Horse()
{
  cout << "Horse destructor..." << endl;
}
GuineaPig::GuineaPig()
{
  cout << "GuineaPig constructor..." << endl;
}
GuineaPig::~GuineaPig()
{
  cout << "GuineaPig destructor..." << endl;
}
