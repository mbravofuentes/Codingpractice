#include <array>
#include <iostream>
using namespace std;


int rotateLeft(int arr[], int n, int d)
{
  int size = n;
  int rotArr[size], i;
  int rotate_index = d;
  while (rotate_index < size)
  {
    rotArr[i] = arr[rotate_index];
    i++;
    rotate_index++;
  }
 rotate_index = 0;
  while(rotate_index < d)
  {
    rotArr[i] = arr[rotate_index];
    i++;
    rotate_index++;
  }
 for (int i = 0; i < n; i++)
  {
    cout << rotArr[i] << " ";
  }
  return 0;
}


int main()
{
   int n, d;
   cin >> n >> d;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
     cin >> arr[i];
   }

   rotateLeft(arr, n, d);
   return 0;
}
