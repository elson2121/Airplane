#include <iostream>

using namespace std;


int main() {
  double num1, num2;
  char operation;
  double result;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> operation;

  cout << "Enter second number: ";
  cin >> num2;

  switch (operation) {
    case '+':
      result = add(num1, num2);
      break;
    case '-':
      result = subtract(num1, num2);
      break;
    case '*':
      result = multiply(num1, num2);
      break;
    case '/':
      result = divide(num1, num2);
      break;
    default:
      cout << "Error: Invalid operator!" << endl;
      return 1; // Indicate an error
  }

  cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

  return 0; // Indicate successful execution
}