#include <iostream>
using namespace std;
int main()
{
    int numberOfTestCase, flag = 0;
    cin >> numberOfTestCase;
    for (int i = 1; i <= numberOfTestCase; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        for (int day = 1; day <= numberOfTestCase; day++)
        {
            int sum = ((b + c) + day);
            if (a == sum)
            {
                cout << day << endl;
                flag = 1;
            }

    }
    // if (flag == 0)
        // cout << -1 << endl;
    return 0;
}