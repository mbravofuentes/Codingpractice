// How classes work on C++ and how to access them

#include <bits/stdc++.h>

using namespace std;

class Mariob
{
  // Access specifier
public:

  //data member
  string fullname;
  int id;

  //meber functions;
  void printid();
  void printname()
  {
    cout << "Your full name is: " << fullname << endl;
  }
};

//How to call members out of class
void Mariob::printid()
{
  cout << "Your full id is: " << id << endl;
}


int main()
{
  // Declare an object of class Mariob
  Mariob obj1;
  //accessing data member
  obj1.fullname  = "Mario Bravo";
  obj1.id= 69;

  //accessing member function
  obj1.printname();
  obj1.printid();


  return 0;
}
