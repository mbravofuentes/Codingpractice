#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int x;
  vector<int> input;
  cin >> x;
  for (int i = 0; i < x; i++)
  {
    int y;
    cin >> y;
    input.push_back(y); // Put the values into the vector
  }

  sort(input.rbegin(), input.rend()); //Reverse order (biggest - small) begin and reverse end
  int a = 0, b = 0;

  for (int i = 0; i < input.size(); i++)
  {
    //Go through input vector and if there is no remainder add to Alice
    if (i % 2 == 0)
    {
      a += input[i];
    }
    else
    {
      b += input[i];
    }
  }
  cout << a << " " << b << endl;
}
