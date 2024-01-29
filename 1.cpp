// #include <iostream>
// using namespace std;

// class Employee {
//   public:
//     string Name;
//     string Company;
//     int age;

//     void introduceYourself() {
//       cout << "Name is: " << Name << endl;
//       cout << "Company is: " << Company << endl;
//       cout << "Age is: " << age << endl;
//     }
// };

// int main() {

//   Employee employee1;
//   employee1.Name = "Patra Kirsani";
//   employee1.Company = "Google";
//   employee1.age = 21;

//   Employee employee2;
//   employee2.Name = "John";
//   employee2.Company = "Amazon";
//   employee2.age = 21;

//   employee1.introduceYourself();
//   employee2.introduceYourself();

//   return 0;
// }

#include <iostream>
using namespace std;

class Employee {

  public:
    string name;
    string company;
    int age;

    Employee (string Name, string Company, int Age) {
      name = Name;
      company = Company;
      age = Age;
    }

};

int main() {

  Employee employee1 = Employee("Patra Kirsani", "Google", 21);
  // employee1.introduceYourself();
  Employee employee2 = Employee("Nandini", "Amazon", 22);

  return 0;
}