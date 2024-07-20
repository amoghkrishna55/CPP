#include <iostream>      // for cin, cout
#include <vector>        // for vector
#include <algorithm>     // for sort, lower_bound, etc.
#include <string>        // for string
#include <set>           // for set
#include <map>           // for map
#include <unordered_map> // for unordered_map
#include <unordered_set> // for unordered_set
#include <queue>         // for queue and priority_queue
#include <stack>         // for stack
#include <list>          // for list
#include <cmath>         // for math functions
#include <climits>       // for limits of data types
#include <bitset>        // for bitset
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int b;
        vector<int> arr;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        if (arr.size() == 1)
            cout << -1 << endl;
        if (arr.size() == 2)
        {
            if (arr[0] != arr[1])
                cout << 0 << endl;
            else
                cout << -1 << endl;
        }
        for (int i = 0; i < b; i++)
        {
            if (arr[0] != arr[1])
            {
                cout << 1 << endl;
            }
            else
            {
                int j = i;
                while (i == arr[j])
                    j++;
                if (j != arr.size() - 1)
                    cout << j << endl;
            }
        }
    }
}