#include <iostream>

class A {
private:
  float A1;
  float A2;
public:
  void setA1(float value) {
    A1 = value;
  }

  void setA2(float value) {
    A2 = value;
  }

  void MA1() {
    std::cout << "MA1\n";
  }

    void MA2() {
    std::cout << "MA2\n";
  }

  void MA3() {
    std::cout << "Alteração a partir do clone\n";
  }
};