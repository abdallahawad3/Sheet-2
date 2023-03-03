#include <iostream>
using namespace std;
int main()
{
    int number, numberOfTestCase;
    cin >> number >> numberOfTestCase;
    while (numberOfTestCase > 0)
    {
        if (number % 10 != 0)
        {
            number = number - 1;
        }
        else
        {
            number = number / 10;
        }
        numberOfTestCase--;
    }
    cout << number << endl;
    return 0;
}