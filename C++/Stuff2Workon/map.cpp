#include <iostream>
#include <map>
#include <vector>
#include <string>


using namespace std;

int main(){
    map<string, int>MyMap;

    MyMap["Mario"] = 20; //This is how you call to insert elements into the map
    MyMap["Alex"] = 19;
    MyMap.insert({"Deez", 5672});
   
   for (auto itr = MyMap.begin(); itr != MyMap.end(); itr++){
       cout << itr->first << " " << itr->second << endl; // "First" points to the key and "second" points to the value
   }
   



    return 0;
}