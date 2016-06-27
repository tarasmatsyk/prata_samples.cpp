#include <iostream>

int main()
{
  using namespace std;

  int input = -1;
  int sum = 0;
  while(input != 0) {
    cout << "gimme one more \n";
    cin >> input;
    cout << "given value is: " << input << endl;
    sum = sum + input;
    cout << "a sum of all numbers is: " << sum << endl;
  }

  return 0;
}
