#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<int> v;
    long long actualsum=0;
    for(int i = 0; i<n-1; i++){
        int x; 
        cin>>x;
        v.push_back(x);
        actualsum += x;
    }
    
    unsigned long long sum  = n*(n+1)/2;
    long long req = sum - actualsum;

    cout<<req<<" ";
    return 0;
}