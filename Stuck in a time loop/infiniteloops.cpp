//Infinite loops until condition is met to the amount of times it has asked to do so

#include <iostream>

using namespace std;

int main()
{
int n;
cin >> n;
for(int i=1; i<=n; ++i)
{
  cout << i << " " << "Abracadabra" << endl;
}
return 0;
}
