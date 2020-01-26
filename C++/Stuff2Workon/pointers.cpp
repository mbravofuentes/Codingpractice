#include <iostream>

using namespace std;

int main()
{
    int x = 25;
    int *p = &x; //* <- this operator points to the value, & <- this operator point to the memory location
    x = x + 5;
    x = *p + 5;
    *p = *p + 5;
    cout << *&x;
    
}