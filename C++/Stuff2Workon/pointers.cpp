#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

//Does not matter how you call these variable in the argument
void update(int *z,int *l) {
    // Complete this function
    int x = (*z) + (*l);
    int y = (*z) - (*l);
    cout << x << endl;
    cout << abs(y) << endl;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b; //Pointer to memory address of int a & b
    scanf("%d %d", &a, &b);
    update(pa, pb);//Updates to 9 and 1
    return 0;
}
