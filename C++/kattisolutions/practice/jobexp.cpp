#include <iostream>

using namespace std;

int main()
{
  int x, y, i, count = 0; // set variables

  cin >> x; // how many inputs

  for (int i = 0; i < x; i++) //go through the amount of inputs
  {
    cin >> y; // plug in a value for the inputs
    if (y < 0) // if there is a y less than zero
      count -= y; // then subtract the count of count which is 0
  }
  cout << count;
  return 0;
}
