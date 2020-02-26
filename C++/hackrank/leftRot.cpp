#include <array>
#include <iostream>
using namespace std;


void rotateLeft(int arr[], int n)
{
  int temp = arr[0];
  for (int i = 0; i < n; i++){
    arr[i]= arr[i +1];
  }
  arr[n-1] = temp;
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
  for (int i = 0; i < d; i++){
    rotateLeft(arr, n);
  }

  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
   return 0;
}
