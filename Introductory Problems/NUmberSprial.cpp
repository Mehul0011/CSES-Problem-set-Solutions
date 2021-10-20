#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll y, x;
        cin>>y>>x;
        ll diagele = 0;
        if(y==x){
            cout<<y*(y-1)+1;
        }
        else if(y>x){
            diagele = y*(y-1)+1;
            if(y%2==0){
                cout<<diagele + (y-x);
            }
            else
            {
                cout<<diagele - (y-x);
            }
            
        }
        else
        {   
            diagele = x*(x-1) + 1;
            if (x%2==0)
            {
                cout<<diagele - (x-y);
            }
            else
            {
                cout<<diagele + (x-y);
            }
            
        }
        cout<<"\n";
    }
    return 0;
}