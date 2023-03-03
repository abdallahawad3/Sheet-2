#include <iostream>
using namespace std;
int main()
{
    int numberOfRow;
    cin >> numberOfRow;
    for (int i = 1; i <= numberOfRow; i++)
    {
        for (int stars = 1; stars <= numberOfRow; stars++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
    }
    return 0;
}