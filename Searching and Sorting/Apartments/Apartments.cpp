#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, m, k;
    cin>>n>>m>>k;

    vector<ll> a, b;
    for(ll i = 0; i<n; i++){
        int x; cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    
    for(ll i = 0; i<m; i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());

    ll * apart = &a[0];
    ll * appli = &b[0];

    int ans = 0;
    while (apart<&a[n] and appli<&b[m])
    {
        if(*apart==*appli){
            ans++;
            appli++;
            apart++;
        }
        
        if(*apart<*appli){
            if(*apart>=(*appli-k)){
                ans++;
                apart++;
                appli++;
            }
            else{
                apart++;
            }
        }
        if(*apart>*appli){
            if(*apart<=(*appli+k)){
                ans++;
                apart++;
                appli++;
            }
            else{
                appli++;
            }
        }
    }
    cout<<ans;
    
    return 0;
}