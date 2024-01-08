#include <iostream>
using namespace std;

int main()
{
  string firstName = "Thi ";
  string lastName = "Pham";
  string fullName = firstName.append(lastName);
  cout << fullName.length();
  return 0;
}