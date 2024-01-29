// Runtime polymorphism

#include <iostream>
using namespace std;

class Parent {

  public:
    void print() {
      cout << "parent class" << endl;
    }

    void show() {
      cout << "Parent class" << endl;
    }
};

class Child: public Parent{
  void print()
  {
    cout << "child class" << endl;
  }

  void show()
  {
    cout << "child class" << endl;
  }
};

int main() {

  Parent *p;
  Child c;

  p = &c;
  p -> print();
  p -> show();

  return 0;
}