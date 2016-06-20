#include <iostream>

struct CandyBar {
  char name[20];
  double price;
  int callories;
};

int main()
{
  using namespace std;
  CandyBar snack = { "Mocha Munch", 2.3, 350 };

  cout << "Name: " << snack.name << endl;
  cout << "Price: " << snack.price << endl;
  cout << "Callories: " << snack.callories << endl;

  return 0;
}
