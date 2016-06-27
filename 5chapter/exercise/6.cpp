#include <iostream>

int main()
{
  using namespace std;
  int i = 2;

  for(int j = 0; j < 10; j++)
  {
    cout << "next is " << i << endl;
    i *= 2;
  }

  return 0;
}
