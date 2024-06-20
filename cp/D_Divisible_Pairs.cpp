#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    int i;
    map<pair<int, int>, long long int> mpp;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int ans = 0;
    for (i = 0; i < n; i++)
    {
        ans += (mpp[{(x - a[i] % x)%x, a[i] % y}]);
        mpp[{a[i]%x,a[i]%y}]++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}