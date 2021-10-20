#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<pair<int, int>> s;

    for(int i = 0; i<n; i++){
        int a, b;
        cin>>a>>b;
        s.insert({a, 1});
        s.insert({b, -1});
    }

    int ans = 0, c = 0; 
    for(pair<int, int> a : s){
        c += a.second;
        ans = max(ans, c);
    }  
    cout<<ans;
    return 0; 
}