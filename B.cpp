#include <iostream>

class B {
private:
  float B1;
  float B2;
public:
  void setB1(float vBlue) {
    B1 = vBlue;
  }

  void setB2(float vBlue) {
    B2 = vBlue;
  }

  void MB1() {
    std::cout << "MB1\n";
  }

    void MB2() {
    std::cout << "MB2\n";
  }
};