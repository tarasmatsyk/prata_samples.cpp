#include <iostream>
#include <cstring>
using namespace std;

struct fucking_pizza
{
  string fucking_name;
  int diameter;
  int weight; 
};

int main()
{
  fucking_pizza pizza;
  cout << "Give me the name of your awesome pizza: " << endl;
  getline(cin, pizza.fucking_name);
  cout << "Gimme a diameter for that awesome pizza " << endl;
  cin >> pizza.diameter;
  cout << "Gimme a weight for that awesome pizza " << endl;
  cin >> pizza.weight;

  cout << "Pizza info: \n";
  cout << "Name: " << pizza.fucking_name << endl;
  cout << "Diameter: " << pizza.diameter << endl;
  cout << "Weight: " << pizza.weight << endl;

  cin.get();
  return 0;
}
