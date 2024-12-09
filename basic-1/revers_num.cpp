#include <iostream>
using namespace std;

int main() {
  int num ;
  cin>>num;
  int rvs = 0;
  while (num) {
    rvs = rvs * 10 + num % 10;
    num /= 10;
  }
  cout << "Reversed numbers: " << rvs << "\n";
  return 0;
}