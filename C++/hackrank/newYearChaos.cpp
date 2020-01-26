#include <iostream>
#include <array>

using namespace std;

int main()
{
    int t; //test cases
    cin >> t;
    for (int i = 0; i < t; i++)
    {   
        int n; //# of people in Queue
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        bool chaotic = false;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] - (j + 1) > 2){
                cout << "Too chaotic" << endl;
                chaotic = true;
                break;
            }
            for (int k = arr[j] - 2 > 0 ? arr[j] - 2 : 0; k < j; k++)
            {
                if (arr)
            }
        }
    }
    return 0;
}
