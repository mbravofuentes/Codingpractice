#include <iostream>

using namespace std;

int main()
{
  int n = 4;
  int sum = 0;
  for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++)
    {
      cout << sum++ << " ";
    }
    }
}
