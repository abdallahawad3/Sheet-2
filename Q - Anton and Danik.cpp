#include <iostream>
using namespace std;
int main()
{
    int size, countForAnton = 0, countForDanik = 0;
    cin >> size;
    string name;
    cin >> name;
    for (int i = 0; i < size; i++)
    {
        if (name[i] == 'A')
            countForAnton++;
        else
            countForDanik++;
    }
    if (countForAnton > countForDanik)
        cout << "Anton";
    else if (countForAnton < countForDanik)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}