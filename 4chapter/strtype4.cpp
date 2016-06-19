#include <iostream>
#include <string>
#include <cstring>

int main()
{
  using namespace std;
  char charr[20];
  string str;

  // a length of char array may be random if it is not initialized.
  // u-16.04. can't reproduce
  cout << "Length of string in charr before input: "
    << strlen(charr) << endl;
  cout << "Length of string in str before input: "
    << str.size() << endl;

  cout << "Enter a line of text:\n";
  cin.getline(charr, 20);
  // indicate maximum length
  cout << "You entered: " << charr << endl;
  cout << "Enter another line of text:\n";
  getline(cin, str);
  // // cin now an argument; no length specifier
  cout << "You entered: " << str << endl;
  cout << "Length of string in charr after input: "
    << strlen(charr) << endl;
  cout << "Length of string in str after input: "
    << str.size() << endl;

  return 0;

  // row string 
  // use R"()"
}
