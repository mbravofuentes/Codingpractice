#include <iostream>

using namespace std;

int main(){
    int n = 205;
    unsigned long long int max = 600851475143;
    unsigned long long int i;
    for (i = 2; i < n; i++){
        if (n % i == 0 ){
            n = n / i; 
        }
    }
    cout << n << endl;
    return 0;
}