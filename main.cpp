#include <iostream>

int main() {
  int year; 
  std::cout << "Input year\n";
  std::cin >> year;
  if ((year % 4 == 0) && (year % 400 == 0)) {
    std::cout << "Leap year\n";
}
  else {
    std::cout << "Not leap year\n"; 
  }
}
