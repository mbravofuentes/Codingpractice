#include <iostream>

using namespace std;

int main()
{
    int max = 1000, sum = 0, i = 0;
    int test = 10;
    while(i < max){
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum;
    return 0;
}