#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long ans = -1e18, tillhere = -1e18;
    for(int i = 1; i < n; i++){
        long long a; cin>>a;
        tillhere = max(tillhere, tillhere+a);
        ans = max(ans, tillhere);
    }
    cout << ans;
    return 0;
}