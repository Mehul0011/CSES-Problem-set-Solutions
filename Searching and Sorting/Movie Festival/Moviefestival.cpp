#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<pair<int, int>> s;

    for(int i = 0; i<n; i++){
        int a, b;
        cin>>a>>b;
        s.push_back({a, b});
    }
    sort(s.begin(), s.end());

    int ans = 1;
    int currently_watching = 0;
    for(int i = 0; i<n; i++){
        if(s[i].first<s[currently_watching].second){
            if(s[i].second<s[currently_watching].second){
                currently_watching = i;
            }
        }
        else{
            ans++;
            currently_watching = i;
        }
    }
    cout<<ans;
    return 0;
}