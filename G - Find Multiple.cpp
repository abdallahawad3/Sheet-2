#include <iostream>
using namespace std;
int main()
{
    int a, b, c, flag = 0;
    cin >> a >> b >> c;
    while (a <= b)
    {
        if (a % c == 0)
        {
            cout << a << endl;
            flag = 1;
            break;
        }
        a++;
    }
    if (flag == 0)
        cout << -1 << endl;
    return 0;
}