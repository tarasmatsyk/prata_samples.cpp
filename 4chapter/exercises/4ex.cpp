#include <iostream>
#include <cstring>
#include <string.h>

int main()
{
  using namespace std;
  string name;
  string lastname;
 
  cout << "Enter your first name: ";
  getline(cin, name);
  cout << "Enter your last name: ";
  getline(cin, lastname);

  char *result = new char[name.length() + 2 + lastname.length()];
  strcat(result, name.c_str());
  strcat(result, ", ");
  strcat(result, lastname.c_str());
  cout << "Here’s the information in a single string: " << result;

  return 0;
}
