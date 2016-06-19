#include <iostream>

// union can store only one value at a time
union one4all
{
  int int_val;
  long long_val;
  double double_val;
};

int main()
{
  using namespace std;
  one4all pail;
  pail.int_val = 15;
  cout << pail.int_val << endl;
  pail.double_val = 1.38;
  cout << pail.double_val; // int value is lost;

  return 0;
}


// anonymous union usage
struct widget
{
  char brand[20];
  int type;
  union id
  {
    long id_num;
    // type 1 widgets
    char id_char[20]; // other widgets
  } id_val;
};
