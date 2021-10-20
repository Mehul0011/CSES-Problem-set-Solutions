#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // just keep track of the maximum no so far.
    int n; 
    cin>>n;
    int mx= 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        int x; 
        cin>>x;
        mx = max(mx, x);
        ans += mx -x;
    }
    cout<<ans;
    return 0;
}
   /* ll n; 
    cin>>n;
    vector<ll> v;
    for(ll i = 0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll currt_max_ele = v[0], moves = 0;
    for(ll i = 0;i<n;i++){
        if(v[i]>currt_max_ele){
            currt_max_ele = v[i];
        }
        else {
            moves += currt_max_ele - v[i];
        }
    }
    cout<<moves;

    return 0;
    */


    