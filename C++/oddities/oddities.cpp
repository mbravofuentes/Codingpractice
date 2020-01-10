#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>
#include <cstring>
using namespace std;

int answer(int num)
{
  (num % 2 == 0) ? cout << num << " is even \n" : cout << num << " is odd \n";
}
void test()
{
  int x = -10;
  assert(answer(x) == "is even");
  assert(answer(-9) == "is odd");
  assert(answer(2) == "is even");
  cout << "All test cases passed" << endl;
}
void kattis()
{
  int x, n;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cout << answer(x);
  }
}

int main(int argc, char* argv[]) {
    if (argc > 1 && strncmp(argv[1], "test", 4) == 0)
        test();
    else
        kattis();
    return 0;
}






/*int main()
{
  int x, n;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> x;
    (x % 2 == 0) ? cout << x << " is even \n" : cout << x << " is odd \n";
  }


}












/*int main()
{
  int n;
  cin >> n;

  string number = n % 2 == 0 ? "Your number is even " : "Your number is odd";
  cout << number << endl;

  return 0;
}*/
