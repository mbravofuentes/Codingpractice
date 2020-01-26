#include <bits/stdc++.h>

using namespace std;
const int MAX_CHAR = 26;

bool twoStrings (string s1, string s2)
{
  vector<bool> v(MAX_CHAR, 0);
  for (int i = 0; i < s1.length(); i++){
    v[s1[i] - 'a'] = true;
  }
  for (int i = 0; i < s2.length(); i++){
    if (v[s1[i] - 'a'])
    return true;
  }
  return false;
}



int main() {
  int in;
  string str1, str2;
  cin >> in;
  for (int i = 0; i < in; i++)
  {
    cin >> str1 >> str2;
    if (twoStrings(str1, str2))
       cout << "Yes" << endl;
  }

  return 0;
}