#include <iostream>
#include <array>

using namespace std;

int countSwap(int arr[], int n){
    int swaps = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n -1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
    return swaps;
}


int main(){
    int n, numOfSwaps = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    numOfSwaps = countSwap(arr, n);
    int size = sizeof(arr)/sizeof(arr[0]);
    int firstElement = arr[0];
    int lastElemt = arr[n - 1];
    cout << "Array is sorted in " << numOfSwaps << " swaps." << endl;
    cout << "First Element: " << firstElement << endl;
    cout << "Last Element: " << lastElemt << endl;
    return 0;
}