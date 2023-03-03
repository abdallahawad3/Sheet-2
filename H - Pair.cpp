// https://vjudge.net/contest/542808#problem/H
#include <iostream>
using namespace std;
int main()
{
    int pair = 0;
    int k;
    cin >> k; // 6
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 0 && j % 2 != 0) // 6 +   == 6
                pair++;                   // 1 2 3 4 5
        }
    }

    cout << pair << endl;
    return 0;
}