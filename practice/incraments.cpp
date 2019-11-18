#include <iostream>

int main()
{
    int n1 = 1; //set int n1 equal to number 1
    int n2 = ++n1; //This set will increment to 2 and updates n1 value
    int n3 = ++ ++n1; // This one will increment to 4 and update n1 and n2 value
    int n4 = n1++;
//  int n5 = n1++ ++;   // error
//  int n6 = n1 + ++n1; // undefined behavior
    std::cout << "n1 = " << n1 << '\n'
             << "n2 = " << n2 << '\n'
             << "n3 = " << n3 << '\n'
             << "n4 = " << n4 << '\n';
}
