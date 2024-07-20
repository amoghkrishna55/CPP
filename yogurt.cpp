#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b, c, d;
        cin >> b >> c >> d;
        if (2 * c < d)
        {
            cout << b * c << endl;
        }
        else
        {
            int sum = 0;
            sum += (b / 2) * d;
            sum += (b % 2) * c;
            cout << sum << endl;
        }
    }
}