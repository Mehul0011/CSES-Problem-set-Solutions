#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<int> arrival, depart;
    for(int i = 0; i<n; i++){
        int a, b;
        cin>>a>>b;
        arrival.push_back(a);
        depart.push_back(b);

    }
    sort(arrival.begin(), arrival.end());
    sort(depart.begin(), depart.end());

    int ans = 1;
    int customers_now = 1;
    int i=1, j=0;
    while(i<n){
        while (depart[j]<arrival[i])
        {
            customers_now--;
            j++;
        }
        i++;
        customers_now++;
        ans = max(customers_now, ans);
    }

    cout<<ans;

    return 0;
}