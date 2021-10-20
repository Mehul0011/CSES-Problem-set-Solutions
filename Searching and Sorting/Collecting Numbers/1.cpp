#include<bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------*/
#define int long long int
#define fl(i, a, b) for(int i = a; i<b; i++)
#define vi vector<int>
#define PB push_back
#define tc int t; cin>>t; while(t--)
#define aa(arr,n) int arr[n]; fl(i,0,n) cin>>arr[i];
#define av(arr, n) vector<int> arr(n); fl(i,0,n) cin>>arr[i];
#define vvi vector<vector<int>>
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define mii map<int,int>
#define R return
#define B break
#define ff first
#define ss second
#define rmin(a,b) (a=min((a), (b)))
#define rmax(a,b) (a=max((a), (b)))
#define C continue
#define lcm(a,b) (a/__gcd(a, b))*b
#define mod 1000000007
const char nl = '\n';
/*--------------------------------------------------------------*/


void solve(){
    int n;
    cin>>n;
    int a, ans = 1;
    int arr[n+1];
    for(int i = 1; i<=n; i++){
        cin>>a;
        arr[a] = i;
    }
    for(int i = 1; i<n; i++){
        ans += (arr[i]>arr[i+1]);
    }

    cout << ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
    return 0;
}