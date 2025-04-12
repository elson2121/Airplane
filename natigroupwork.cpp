#include <iostream>

using namespace std;
// Function to add two numbers
double add(double num1, double num2) {
  return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
  return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
  return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
  if (num2 != 0) {
    return num1 / num2;
  } else {
    cout << "Error: Division by zero!" << endl;
    return 0; // Return 0 or handle the error as needed
  }
}

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
    

  return 0; // Indicate successful execution
}