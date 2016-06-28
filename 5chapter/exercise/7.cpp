#include <iostream>
#include <string>

int main()
{
  using namespace std;
  struct car {
    string name;
    int year;
  };

  car *cars = new car[2];
  for(int i = 0; i < 2; i++) {
    cout << "Please enter car name: " << endl;
    getline(cin, cars[i].name);
    cout << "Please enter car year: " << endl;
    cin >> cars[i].year;
    cin.get();
  }

  cout << "Here are your cars: " << endl;
  for(int i = 0; i < 2; i++) {
    cout << cars[i].year << " <- year" << endl;
    cout << cars[i].name << " <- name" << endl;
    cout << endl;
  }

  return 0;
}

