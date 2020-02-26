#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector <bool> vecBool (3); //vector of bool that holds 3 elements

    //assign elements using [] operator
    vecBool[0] = 1;
    vecBool[1] = 1;
    vecBool[2] = 0;

    //Insert fourth element using push.back and will cause the vector to resize the buffer
    vecBool.push_back(true);

    cout << "The content of the vectors are: " << " { ";
    for (int i = 0; i < vecBool.size(); i++){
        cout << vecBool[i];
        cout << " }" << endl;
    }

    return 0;
}