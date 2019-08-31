// Name:
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main ()
{
  double meal_cost, tax, tip, total;

  // Finds the cost of the meal
  std::cout << "Welcome to the Restaurant Bill Calculator!\n";
  std::cout << "What is the total meal cost? $";
  std::cin >> meal_cost;

  // Finds the tax
  tax = meal_cost * .0775;
  std::cout << "tax is " <<tax<< " dollars\n";

// Find the tip
  tip = meal_cost * .20;
  std::cout << "tip is " <<tip<< " dollars\n";


  // Finds the total
  total = meal_cost + tax + tip;

  // Displays the total
  std::cout << "the total is " <<total<< " dollars\n";

  return 0;

}
