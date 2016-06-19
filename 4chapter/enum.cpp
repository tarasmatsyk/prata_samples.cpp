#include <iostream>

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

int main()
{
  using namespace std;
  spectrum spec;
  spec = spectrum(2);

  cout << "A value of spec is " << spec << endl;
  spec = spectrum(10);
  cout << "Create from 10 so you can get out of range" << endl;
  cout << "A new value of spec is " << spec << endl;
  return 0;
}
