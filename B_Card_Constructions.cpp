#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans,k,n;
        ans = 0;
        cin >> n;
        while (n >= 2)
        {
            ++ans;
            k = 2;
            while (n >= k)
            {
                n -= k;
                k += 3;
            }
        }
        cout << ans << endl;
    }
}