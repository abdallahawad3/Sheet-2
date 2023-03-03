#include <iostream>
using namespace std;
int main()
{
    int size, count = 0;
    cin >> size;
    char arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
    }
    cout << count << endl;
    return 0;
}