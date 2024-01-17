#include <iostream>
using namespace std;

class Employee {
  int count;
  int id;

public:
  void setDAta() {
    cout << "Enter the id no: ";
    cin >> id;
  }
  void getData() {
    cout << "The id of this employee is: " << id << endl;
  }
};

int main() {

  Employee patra;
  
  // patra.id = 1;
  // patra.count = 1;  // cannot do this as id and count are private

  patra.setDAta();
  patra.getData();

  return 0;
}