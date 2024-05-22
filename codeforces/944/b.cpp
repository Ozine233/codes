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

        bool flag = false;
        for(int i = 0; i < s.size(); i ++)
        {
            if(s[i] != s[0])
            {
                swap(s[i], s[0]);
                flag = true;
                break;
            }
        }

        if(!flag) cout << "NO\n";
        else cout << "YES\n" << s << endl;
    }

    return 0;
}