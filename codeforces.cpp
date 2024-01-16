#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        long long int n;
        cin >> n;
        set<long long int> s;
        vector<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            if (s.count(x))
            {
                v.push_back(x);
            }
            else
            {
                s.insert(x);
            }
        }
        for (auto it = s.begin(); it != s.end(); ++it)
        {
            cout << *it << " ";
        }
        for (long long int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}