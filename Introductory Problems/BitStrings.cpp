#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll a, ll b){
    ll result = 1;
    while(b){
        if(b%2){
            result = (result*a)%mod; 
        }
        a = (a*a)%mod;
        b /= 2;
    }
    return result;
}
int main(){
    ll n;
    cin>>n;
    ll ans = power(2, n);
    cout<<ans;
    return 0;
}