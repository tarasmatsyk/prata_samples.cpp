#include <iostream>
#include <cstring>

int main()
{
  using namespace std;
  string name;
  string lastname;
  char grade;
  unsigned short age;

  cout << "What is your first name? ";
  getline(cin, name);
  cout << "What is your last name? ";
  getline(cin, lastname);
  cout << "What letter grade to you deserver? " ;
  cin >> grade;
  cout << "What is your age? ";
  cin >> age;
  cout << "Name: " << name << " " << lastname << endl;
  cout << "Grade: " << ++grade << endl;
  cout << "Age: " << age << endl;

  cin.get();
  return 0;
}
