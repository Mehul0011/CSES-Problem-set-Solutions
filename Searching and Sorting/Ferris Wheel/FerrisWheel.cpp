#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll n, x;
    cin>>n>>x;
 
    vector<ll> v;
 
    for(ll i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    ll lightest = 0;
    ll res = 0;
    ll last = n-1;
    while( last>lightest){
        if(x>=(v[last] + v[lightest])){
            res++;
            last--;
            lightest++;
        }
        else{
            res++;
            last--;
        }
    }
    if(last==lightest){
        res++;
    }
 
    cout<<res;
 
    return 0;
}