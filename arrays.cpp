#include <iostream>
#include <string>
using namespace std;

// create a structure variable called myStructure
int main()
{
  struct
  {
    int myNum;
    string myString;
  } myStructure;
  // assign values to members of myStructure
  myStructure.myNum = 1;
  myStructure.myString = "Hello Trang";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}