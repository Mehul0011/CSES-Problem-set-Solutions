#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long int
#define fl(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define PB push_back
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define aa(arr, n) \
    int arr[n];    \
    fl(i, 0, n) cin >> arr[i];
#define av(arr, n)      \
    vector<int> arr(n); \
    fl(i, 0, n) cin >> arr[i];
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int, int>
#define R return
#define B break
#define ff first
#define ss second
#define rmin(a, b) (a = min((a), (b)))
#define rmax(a, b) (a = max((a), (b)))
#define C continue
#define lcm(a, b) (a / __gcd(a, b)) * b
#define mod 1000000007
const char nl = '\n';
/*--------------------------------------------------------------*/

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 1;
    int pos[n + 2], a[n + 2];
    a[0] = 0, pos[0], a[n+1] = n+1, pos[n+1] = n+1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }

    for (int i = 1; i < n; i++)
    {
        ans += (pos[i] > pos[i + 1]);
    }

    int j, k;
    for (int i = 0; i < m; i++)
    {
        cin >> j >> k;

        ans -= (pos[a[j]] < pos[a[j]-1]);
        ans -= (pos[a[j]] > pos[a[j]+1]);
        if(a[k]!=(a[j]+1))
            ans -= (pos[a[k]] < pos[a[k]-1]);
        if(a[k]!=(a[j]-1))
            ans -= (pos[a[k]] > pos[a[k]+1]);

        swap(pos[a[j]], pos[a[k]]);
        swap(a[j], a[k]);

        ans += (pos[a[j]] < pos[a[j]-1]);
        ans += (pos[a[j]] > pos[a[j]+1]);
        if(a[k]!=(a[j]+1))
            ans += (pos[a[k]] < pos[a[k]-1]);
        if(a[k]!=(a[j]-1))
            ans += (pos[a[k]] > pos[a[k]+1]);

        cout << ans << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}