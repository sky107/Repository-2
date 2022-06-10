#include <bitset>
#include <iostream>
using namespace std;

signed main() {

  int data = 15;

  bitset<16> b(data);
  cout << b << '\n';
  b = bitset<16>(data >> 1);
  cout << b << '\n';
  // left shift means form left shift all bits
}