#include <iostream>


using namespace std;

int main()
{
  int income, count = 0;
  cin >> income;
for (int i = 0; i < income; i++)
{
  int l;
  cin >> l;
  if (l<0)
  {
    count -= l;
  }
}
cout << count;
return 0;
}
