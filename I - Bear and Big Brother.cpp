#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int year = 1; year >= 1; year++)
    {
        a = (a * 3) * year;
        b = (b * 2) * year;
        if (a > b)
        {
            cout << year << endl;
            break;
        }
    }
    return 0;
}