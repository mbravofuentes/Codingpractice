#include <iostream>

using namespace std;


int main()
{
int count;
int NoF[] = {3, 5, 1, 6, 7};
 for (int i = 0; i < sizeof(NoF)/sizeof(NoF[0]); i++)
 {
   count++;
 }
 cout << count;


}
