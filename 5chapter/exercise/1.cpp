#include <iostream>

int main()
{
  using namespace std;

  cout << "give me 2 numbers" << endl;
  int smaller;
  cin >> smaller;
  cout << "give me the second numbers" << endl;
  int bigger;
  cin >> bigger;

  int sum = smaller;
  for(int i = smaller; i<bigger; i++)
  {
    sum += i;
  }

  cout << "a sum of all numbers is: " << sum << endl;

  return 0;
}
