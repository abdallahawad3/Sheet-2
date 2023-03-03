#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int sumLeft = 0, sumRight = 0;
    int numberOfMatrix;
    cin >> numberOfMatrix;
    for (int i = 1; i < numberOfMatrix; i++)
    {
        for (int j = 1; j < numberOfMatrix; j++)
        {
            int x;
            cin >> x;
            if (i == j)
                sumLeft += x;
            if (i == j - i - 1)
                sumRight += x;
        }
    }
    cout << abs(sumLeft - sumRight) << endl;
    return 0;
}