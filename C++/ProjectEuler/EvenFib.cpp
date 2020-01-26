#include <iostream>

using namespace std;

int main(){
    int max = 4000000; 
    int i = 3, n = 0;
    int sum = 2, n1 = 1, n2 = 2;
    cout << endl;
    while (i < max){
        n = n1 + n2;
        if (n % 2 == 0 && sum < max){
            sum += n;
        }
        n1 = n2;
        n2 = n;
        i++;
    }
    cout << sum << endl;
}