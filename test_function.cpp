#include <iostream>
using namespace std;
// int myFunction(int x);
// float myFunctiion(float x);
// double myFunction(double x, double y);
// multiple functions can have the same name with different parameters
int plusFuncInt(int x, int y)
{
  return x + y;
}
double plusFuncDouble(double x, double y)
{
  return x + y;
}
int main()
{
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}