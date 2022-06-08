#include <iostream>
using namespace std;

class Dog {
public:
  friend class Cat;

private:
  string name;
  int age;
};

class Cat {

private:
  string name;
  int age;

public:
  string getName(Dog &d) { return d.name; }
};

signed main() {

  Dog d1;
  Cat c1;

  cout << c1.getName(d1);
  return 0;
}