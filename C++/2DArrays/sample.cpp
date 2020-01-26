#include <iostream>

using namespace std;

int main()
{
  int x[6][6], max = -63;
  int temp;
//access the array andd input int values into it
  for (int i = 0; i <= 6; i++)
  {
    for (int j = 0; j <= 6; j++)
    {
      cin >> x[i][j];
    }
  }

  for (int i = 0; i < 6-2; i++)
  {
    for(int j = 0; j < 6-2; j++)
    {
      temp = x[i][j] + x[i][j+1] + x[i][j+2] // row 1
            + x[i+1][j+1] //row 2
            + x[i+2][j] + x[i+2][j+1]+ x[i+2][j+2]; //row 3
            if (temp > max)
            {
              max = temp;
            }
          }
}
cout << max << endl;
return 0;
}
