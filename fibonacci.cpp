#include <iostream>
using namespace std;

class Fibo {
  public:
    int terms;

  Fibo (int n) {
    terms = n;
  }

  void series() {
    int first = 0;
    int second = 1;

    cout << "Series is: ";
    for(int i = 0; i < terms; i++) {
      cout << first << " ";
      int next = first + second;

      first = second;
      second = next;
    }
  }

};

int main() {

  int term;
  cout << "Enter number of terms: ";
  cin >> term;

  Fibo series(term);

  series.series();

  return 0;
}