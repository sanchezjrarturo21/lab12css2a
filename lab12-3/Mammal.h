#ifndef MAMMAL_H
#define MAMMAL_H
#include <iostream>
using namespace std;
class Mammal
{
public:
  Mammal();
  ~Mammal();
  virtual void move() const;
  virtual void speak() const;

protected:
  int itsAge;
};
class Dog : public Mammal
{
public:
  void move() const;
  void speak() const;
};
class Cat : public Mammal
{
public:
  void move() const;
  void speak() const;
};
class Horse : public Mammal
{
public:
  void move() const;
  void speak() const;
};
class GuineaPig : public Mammal
{
public:
  void move() const;
  void speak() const;
};
#endif
