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
    int x, n;
    cin >> x >> n;

    set<int> light;
    light.insert(0);
    light.insert(x);

    map<int, int> passage_freq;
    passage_freq[x] = 1;

    int p;
    for(int i = 0; i<n; i++){
        cin>>p;

        auto it = light.lower_bound(p);
        int r = *it;
        int l = *(--it);

        passage_freq[r-l]--;
        if(!passage_freq[r-l])
            passage_freq.erase(r-l);

        light.insert(p);
        passage_freq[r-p]++;
        passage_freq[p-l]++;

        cout << ((--passage_freq.end())->first) << " ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}