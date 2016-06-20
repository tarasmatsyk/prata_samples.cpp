#include <iostream>
#include <cstring>
#include <string.h>

int main()
{
  using namespace std;
  char name[20];
  char lastname[20];
 
  cout << "Enter your first name: ";
  cin.getline(name, 10);
  cout << "Enter your last name: ";
  cin.getline(lastname, 10);

  strncat(name, ", ", 20);
  strncat(name, lastname, 20);
  cout << "Here’s the information in a single string: " << name;
  return 0;
}
