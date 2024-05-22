#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t --)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int l = max(c, d), r= min(c, d);

        if((a > l || a < r) && (b < l && b > r)) cout << "YES\n";
        else if((a < l && a > r)&&(b > l || b < r)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}