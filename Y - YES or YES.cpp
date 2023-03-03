#include <iostream>
using namespace std;
int main()
{
    int numberOfTestCases;
    cin >> numberOfTestCases;
    for (int i = 0; i < numberOfTestCases; i++)
    {
        string word;
        cin >> word;
        if (word == "YES" || word == "YEs" || word == "YeS" || word == "Yes" || word == "yES" || word == "yEs" || word == "yeS" || word == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}