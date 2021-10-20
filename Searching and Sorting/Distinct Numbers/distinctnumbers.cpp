#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> b;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int ans = n;
    sort(b.begin(), b.end());
    for(int i = 1; i<n; i++){
        if(b[i]==b[i-1]){
            ans--;
        }
    }
    cout<<ans;
    return 0;
}