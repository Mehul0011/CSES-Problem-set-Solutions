#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int repcnt = 0, ans = 1;
    char repc = s[0];
    
    /*for(char d : s){
        if(d==repc){
            repcnt++;
            ans = max(ans, repcnt);
        }
        else{
            repcnt = 1;
            repc = s[i];
        }
    }
    */

    for(int i = 0; i<n; i++){
        if(s[i]==repc){
            repcnt++;
            ans = max(ans, repcnt);
        }
        else
        {
            repcnt = 1;
            repc = s[i];
        } 
    }
    cout<<ans;
    return 0;
}