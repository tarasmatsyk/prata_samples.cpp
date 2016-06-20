#include <iostream>

int main()
{
  using namespace std;
  char name[20];
  char lastname[20];
  char grade;
  unsigned short age;

  cout << "What is your first name? ";
  cin.getline(name, 20);
  cout << "What is your last name? ";
  cin.getline(lastname, 20);
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
