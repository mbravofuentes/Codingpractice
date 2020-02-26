#include <iostream>
#include <array>

using namespace std;

int main()
{
  int tasks, time;

  cin >> tasks >> time;
  int arr[tasks];

  for (int i = 0; i < tasks; i++){
    cin >> arr[i];
  }
  int count = 0, sum = 0;

  for(int i = 0; i < tasks; i++){
    sum += arr[i];
    if (sum <= time){
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
