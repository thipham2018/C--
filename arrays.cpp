#include <iostream>
#include <string>
using namespace std;

int main()
{
  string food = "Pizza"; // a string variable
  string *ptr = &food;   // A pointer variable that stores the address of food

  // output the value of food
  cout << food << "\n";
  // output the memory address of food
  cout << &food << "\n";
  // Output the memory address of food with the pointer
  cout << ptr << "\n";
  return 0;
}