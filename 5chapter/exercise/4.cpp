#include <iostream>

double getPercentage(double original, double percentage);

int main()
{
  using namespace std;
  double daphne_money = 100;
  double cleo_money = daphne_money;
  double daphne_bet = 0.1;
  double cleo_bet = 0.05;

  cout << "give me amount of years " << endl;
  int years;
  cin >> years;
  double daphne_income = getPercentage(daphne_money, daphne_bet);

  // takes 27 years to win.
  for(int i = 1; i <= years; i++) 
  {
    daphne_money += daphne_income;
    cleo_money += getPercentage(cleo_money, cleo_bet);

    if(years < 20) {
      cout << "year # " << i << endl;;
      cout << "daphne money = " << daphne_money << endl;
      cout << "cleo money = " << cleo_money << endl;
    }
  }

  cout << endl;
  cout << "daphne money = " << daphne_money << endl;
  cout << "cleo money = " << cleo_money << endl;
  if(cleo_money > daphne_money) {
    cout << "cleo wins" << endl;
  } else { cout << "daphne wins" << endl;
  }

  return 0;
}

double getPercentage(double original, double percentage) {
  return original * percentage;
}
