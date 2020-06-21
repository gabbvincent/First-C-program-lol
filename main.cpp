#include <iostream>

int main() {

  int divisor, dividend, quotiant, remainder ;

  std::cout << "Enter two numbers: " ;

  std::cin >> dividend >> divisor ;

  quotiant = dividend / divisor ;

  remainder = dividend % divisor ;

  std::cout << quotiant << "," << remainder ;

}