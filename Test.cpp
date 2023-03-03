#include <iostream>
#include <string>
using namespace std;
int main()
{

    int numberOfTestCase;
    cin >> numberOfTestCase;
    char name[numberOfTestCase];
    for (int i = 0; i < numberOfTestCase; i++)
        cin >> name[i];
    
    for (int i = 0; i < numberOfTestCase; i++)
    {
        if (name[i] == 'c' || name[i] == 'o' || name[i] == 'd' || name[i] == 'e' || name[i] == 'f' || name[i] == 'r' || name[i] == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
