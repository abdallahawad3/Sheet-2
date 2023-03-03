#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int row = 1; row <= num; row++)
    {
        for (int stars = 1; stars <= num; stars++)
        {
            if (row == 1 || row == num || stars == 1 || stars == num)
                cout << "*"<<" ";
            else
                cout<<" "<<" ";
        }
        cout << endl;
    }
    return 0;
}