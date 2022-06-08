#include <__tuple>
#include <iostream>

using namespace std;

class user {

  friend string getReverseName(user &u);

public:
  user(string name, int age) {
    name = name;
    age = age;
  }

private:
  string name;
  int age;
};

string getReverseName(user &u) { return u.name; }

signed main() {
  user a("Siddharth", 21);

  cout << getReverseName(a);
}