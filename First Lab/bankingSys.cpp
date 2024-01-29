#include <iostream>
using namespace std;

class BankingSys {
  public:
    double initialBal;
    double rateofInterest;

    BankingSys(double inBal, double raOfInt) {
      initialBal = inBal;
      rateofInterest = raOfInt;
    }

    int deposite() {

    }

    void displayMenu() {
      cout << 
    }


};

int main() {

  double initialBal;
  double rateofInterest;

  cout << "Enter the initial balance: ";
  cin >> initialBal;

  cout << "Enter the rate of Interest: ";
  cin >> rateofInterest;

  BankingSys bankSys(initialBal, rateofInterest);

  int choice;



  return 0;
}