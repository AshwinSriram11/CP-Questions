// https://codeforces.com/problemset/problem/1097/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag = false;

    // generate all cases by choosing whether a particular angle should be clockwise or anticlockwise
    for (int i = 0; i < (1 << n); i++)
    {
        ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                ans -= a[j]; // anticlockwise
            else
                ans += a[j]; // clockwise
        }

        if (ans % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}