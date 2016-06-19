#include <iostream>

int main() 
{
  using namespace std;
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];
  cout << "Enter your name:\n";
  //cin >> name;
  //cin.getline(name, 20);
  // cin.get(name, ArSize).get();  // read string, newline
  cin.get(name, 20);
  cin.get(dessert, 20);
  cout << "Enter your favorite dessert:\n";
  //cin >> dessert;
  //cin.getline(dessert, 20);
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";
  return 0;

  /*
   Mixing input methods can cause problems.
   For instance, cin.get() and cin leave new line char in the input queue 
   which means when the cin.get or getline is called they get a new line char instead of the input you would like to pass to it
   * */
}
