#include <iostream>
using namespace std;

int main()
{
  double originalPrice, stateTax, countyTax, totalTax, totalPrice;
  double tax1percentage, tax2percentage;
  /*tax1percentage means state tax percentage
    tax2percentage means county tax percentage
  */
  cout << "Enter the original price of the item: ";
  cin >> originalPrice;

  cout << "Enter the tax percentage of your state: ";
  cin >> tax1percentage;
  stateTax = originalPrice * tax1percentage / 100;

  cout << "Enter the tax percentage  of your country: ";
  cin >> tax2percentage;
  countyTax = originalPrice * tax2percentage / 100;

  totalTax = stateTax + countyTax;
  totalPrice = originalPrice + totalTax;

  cout << "The total price of the item is: " << totalPrice << endl;

  return 0;
}