#include <iostream>

struct CandyBar {
  char name[20];
  double price;
  int callories;
};


int main()
{
  using namespace std;
  CandyBar bars[3] = {
    { "Mocha Munch 1", 2.3, 350 },
    { "Mocha Munch 2", 2.3, 351 },
    { "Mocha Munch 3", 2.3, 352 }
  };

  CandyBar *snack = bars;
  for(int a = 0; a < 3; a++) {
    cout << "Name: " << snack->name << endl;
    cout << "Price: " << snack->price << endl;
    cout << "Callories: " << snack->callories << endl;
    snack += 1;
  }

  cin.get();
  return 0;
}
