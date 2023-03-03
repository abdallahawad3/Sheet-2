#include <iostream>
using namespace std;
int main()
{
    int numberOfTestCase;
    cin >> numberOfTestCase;
    for (int i = 0; i < numberOfTestCase; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a || c + a == b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}