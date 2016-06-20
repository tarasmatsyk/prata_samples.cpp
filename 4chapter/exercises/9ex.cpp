#include <iostream>
#include <cstring>

struct CandyBar {
  char name[20];
  double price;
  int callories;
};


int main()
{
  using namespace std;
  CandyBar * bars = new CandyBar[3];

  strcpy(bars[0].name, "Mocha Munch 1");
  bars[0].price = 2.3;
  bars[0].callories = 350;
  strcpy(bars[1].name, "Mocha Munch 2");
  bars[1].price = 2.3;
  bars[1].callories = 350;
  strcpy(bars[2].name, "Mocha Munch 3");
  bars[2].price = 2.3;
  bars[2].callories = 350;

  CandyBar *snack = bars;
  for(int a = 0; a < 3; a++) {
    cout << "Name: " << snack->name << endl;
    cout << "Price: " << snack->price << endl;
    cout << "Callories: " << snack->callories << endl;
    snack += 1;
  }

  delete[] bars;

  cin.get();
  return 0;
}
