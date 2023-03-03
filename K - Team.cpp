#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int numberOfTest;
    cin >> numberOfTest;
    for (int i = 0; i < numberOfTest; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a == 1 && b == 1 && c == 1) || (a == 1 && b == 1 && c == 0) || (a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 & c == 1))
            count++;
    }
    cout << count;
    return 0;
}