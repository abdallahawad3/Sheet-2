#include <iostream>
using namespace std;
int FindDigit(int a)
{
    int count = 0;
    int n = a;
    while (a > 0)
    {
        int digit = a % 10;
        if (digit != 0 && n % digit == 0)
            count++;
        a = a / 10;
    }
    return count;
}
int main()
{
    int numberOfTestCase;
    cin >> numberOfTestCase;
    for (int i = 0; i < numberOfTestCase; i++)
    {
        int num;
        cin >> num;
        cout << FindDigit(num) << endl;
    }
    return 0;
} /*

 #include <iostream>
 using namespace std;

 int findDigits(int n) {
     int count = 0;
     int num = n; // make a copy of n

     while (num > 0) {
         int digit = num % 10;
         if (digit != 0 && n % digit == 0) {
             count++;
         }
         num /= 10;
     }

     return count;
 }

 int main() {
     int t; // number of test cases
     cin >> t;

     for (int i = 0; i < t; i++) {
         int n;
         cin >> n;
         cout << findDigits(n) << endl;
     }

     return 0;
 }

 */