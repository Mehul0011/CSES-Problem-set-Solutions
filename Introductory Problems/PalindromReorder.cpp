#include <bits/stdc++.h>
using namespace std;
#define CHAR 256
int main()
{
    string s;
    cin >> s;
    int count[CHAR] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }
    int odd = -1, ok = true;
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] % 2)
        {
            odd == -1 ? odd = i : ok = false;
        }
    }
    if (!ok)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    string res = "";
    for (int i = 0; i < CHAR; i++)
    {
        for (int j = 0; j < count[i] / 2; j++)
        {
            res += (char)i;
        }
    }
    string s1(res);
    reverse(s1.begin(), s1.end());
    if(odd!=-1){
        res += (char)odd;
    }
    res += s1;
    cout << res;

    return 0;
}