#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<n;
    }
    else if(n<4){
        cout<<"NO SOLUTION";
    }
    else
    {
        for(int i = 2; i<=n; i+=2){
            cout<<i<<" ";
        }
        for(int i = 1; i<=n; i+=2){
            cout<<i<<" ";
        }
    }
    
    return 0;
}