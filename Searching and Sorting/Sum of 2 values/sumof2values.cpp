#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n, x;
    cin>>n>>x;
    int a;
    map<int, int> mp;
    for(int i = 0; i<n; i++){
        cin>>a;
        if(mp.find(x-a) != mp.end()){
            cout << mp[x-a] + 1 << " " << i + 1;
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE";

    return 0;
}