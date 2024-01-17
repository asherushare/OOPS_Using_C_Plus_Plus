#include <iostream>
#include <string>
using namespace std;

class binary
{
  string s;

public:
  void read(void);
  void chk_bin(void);
  void ones(void);
  void display(void);
};

void binary ::read(void)
{
  cout << "Enter a binary number: ";
  cin >> s;
}

void binary ::chk_bin(void)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != '0' && s[i] != '1')
    {
      cout << "Incorrect binary format " << endl;
      exit(0);
    }
  }
}

void binary :: ones(void) {
  for(int i = 0; i < s.length(); i++) {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary :: display(void)
{
  cout << "Displaying you binary number: " << endl;
  for(int i = 0; i < s.length(); i++) {
    cout << s.at(i);
  }
  cout << endl;
}

int main()
{

  // OPPS - classes and objects
  // C++ --> initially called --> C with classes by stroustroup
  // class --> extension of structures (in C)
  // structures had limitations
  //  - members are public
  //  -No methods

  // classes --> structures + more
  // classes --> can have methods and properties
  // classes --> can make few members as private and few as public
  // structures in C++ are typedefed
  // you can declare objects along with the class declaration
  // class Employee {
  //   //class definition
  // } harry, rohon, lovish;

  // Nesting of member functions

  binary b;
  b.read();
  b.chk_bin();
  b.display();
  b.ones();
  b.display();

  return 0;
}