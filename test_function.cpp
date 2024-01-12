#include <iostream>
#include <string>
using namespace std;

void myFuction(string fname)
{ // fname is called a parameter when it passed to the function, it is called an arguments
  cout << fname << "Refsnes\n";
}
int main()
{
  // Lan, Jenny, Anna are called Arguments
  myFuction("Lan");
  myFuction("Jenny");
  myFuction("Ana");
  return 0;
}
