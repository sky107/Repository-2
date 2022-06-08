#include <iostream>
using namespace std;

// members are private by default

class Cylinder {
private:
  double base_radius = 0, height = 0;

public:
  Cylinder() { // it should be in the public scope
    base_radius = 2.0;
    height = 2.0;
  }

  Cylinder(double rad,double height){
  	base_radius=rad;
  	height=height;
  }

  double volume() { return 3.14 * base_radius * base_radius * height; }
};

signed main() {

  Cylinder c1;
  Cylinder c2(10,20);n
  cout << c1.volume() << '\n';
}