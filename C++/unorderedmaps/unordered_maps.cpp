#include <iostream>
#include <unordered_map>
#include <string>
#include <cstring>

using namespace std;

int main()
{
  unordered_map<string, string> dict;
  string line;

  while(getline(cin, line) && line != " ")
  {
    string english, foreign;
    int index = line.find(' ');
    english = line.substr(0, index);
    foreign = line.substr(index+1, line.size()-1);

    dict.insert({foreign, english});
  }

while(getline(cin, line))
{
  if(dict.count(line)>0)
    {
    cout << dict.find(line)->second;
    }
  else
    {
    cout << "eh";
    }
  }
}
