//https://atcoder.jp/contests/abc208/tasks/abc208_b
#include <iostream>
using namespace std;

int fac[20];

int main() {
  fac[0] = 1;
  for (int i = 1; i <= 10; i++) {
    fac[i] = fac[i - 1] * i;
  }

  int P, answer = 0;
  cin >> P;

  for (int i = 10; i >= 1; i--) {
    while (P >= fac[i]) {
      answer++;
      P -= fac[i];
    }
  }

  cout << answer << endl;
}
