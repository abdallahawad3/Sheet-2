#include <iostream>
using namespace std;
int main()
{
    int num, flag = 0;
    cin >> num;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << "No";
            flag = 1;
            break;
        }
    } // cout << prime(num) << endl;

    if (flag == 0)
        cout << "YES";
    return 0;
}