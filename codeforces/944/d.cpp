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
        string s;
        cin >> s;

        if(s.size() == 1)
        {
            cout << 1 << endl;
            continue;
        }

        int ans = 1;
        bool flag = false;
        for(int i = 0; i < s.size() - 1; i ++)
        {
            if(s[i] == '1' && s[i + 1] == '0') ans ++;
            else if(s[i] == '0' && s[i + 1] == '1')
            {
                if(!flag) flag = true;
                else ans ++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}