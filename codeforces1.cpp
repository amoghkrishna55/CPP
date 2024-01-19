#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double n, m, a, s = 0;
    cin >> n >> m >> a;
    if (n <= a && m <= a)
        s = 1;
    else if (n > a && m <= a)
        s = ceil(n / a);
    else if (m > a && n <= a)
        s = ceil(m / a);
    else if (n > a && m > a)
        s = ceil(n / a) * ceil(m / a);
    cout << fixed << setprecision(0) << s << endl;
    return 0;
}
