#include <iostream>
using namespace std;
int main()
{

    int numberOfTest;
    cin >> numberOfTest;
    int sumX = 0, sumY = 0, sumZ = 0;
    for (int i = 0; i < numberOfTest; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x; // 0
        sumY += y; // 0
        sumZ += z; // 7 + -4 + -3 = 0
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
} /*

 #include <iostream>

 using namespace std;

 int main()
 {
     int n;
     cin >> n;

     int sumX = 0, sumY = 0, sumZ = 0;
     for (int i = 0; i < n; i++)
     {
         int x, y, z;
         cin >> x >> y >> z;
         sumX += x;
         sumY += y;
         sumZ += z;
     }

     if (sumX == 0 && sumY == 0 && sumZ == 0)
     {
         cout << "YES\n";
     }
     else
     {
         cout << "NO\n";
     }

     return 0;
 }
 */
