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
            if (stars == row || stars== (num+1)-row )
                cout << "*"<<" ";
            else
                cout << " "<<" ";
        }
        cout<<endl;
    }

    /*
                    row        stars   star == row
    *    *           1           2
      * *            2           2 
      * *            3           2 
    *     *          4           2 
    */
    return 0;
}