#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int numberOfTestCase;
    cin >> numberOfTestCase;
    for (int i = 0; i < numberOfTestCase; i++)
    {
        int arr[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }
    return 0;
}