#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<int>myQ;

    myQ.push(5);
    myQ.push(10);
    myQ.push(69);

    cout << "Size of myQ is: " << myQ.size() << endl;
    
    cout << "The Queue contains: ";
    while(!myQ.empty()){
        cout << ' ' << myQ.front() << endl;
         myQ.pop();
    }

    cout << "Queue new size is: " << myQ.size() << endl;
    return 0;
}