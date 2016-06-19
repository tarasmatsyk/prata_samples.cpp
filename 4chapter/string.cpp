#include <iostream>

int main()
{
  using namespace std;
  char arr[8] = { 'a', 'b', 'c', '\0', 'd', 'f', 'e', 'g' };
  cout << arr << endl;

  char name[8];
  cout << "What's your name, 8 characters?" << endl;
  cin >> name;
  cout << "Your name is:" << endl;
  cout << name << endl;

  char charr2[20] = "jaguar";
  cout << "char charr2[20] = " << charr2;
}
