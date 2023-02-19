#include <iostream>
using namespace std;

int main() {
  int num, reminder, reverse = 0;
  cout << "Enter the number: ";
  cin >> num;

  while (num != 0) {
    reminder = num % 10;
    reverse = reverse * 10 + reminder;
    num = num / 10;
  }
  cout << "Reverse number = " << reverse;
}