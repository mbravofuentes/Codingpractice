#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool cmp(string s1, string s2){
  return (s1.substr(0, 2) < s2.substr(0,2)); //
}

int main()
{
  while (true){
  int n;
  cin >> n;
  if(!n) break; // since its a true-false statement, once it sees an input of 0 which is false, the code will stop
  vector<string> names (n, ""); // n amount of strings that are strings
  for (int i = 0; i < n; i++){
    cin >> names[i];
    }
  cout << endl;
  stable_sort(names.begin(), names.end(), cmp); //parameter that stable sort can take
  for(int i = 0; i < n; i++){
    cout << names[i] << endl;
    }
    cout << endl;
  }
  return 0;
}
