#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> ans(n,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({v[n-1],n-1});
    for(int i=n-2;i>=0;i--){
        while(!pq.empty() && v[i]>=pq.top().first){
            pq.pop();
        }
        if(!pq.empty())ans[i] = 1 + ans[pq.top().second];
        pq.push({v[i],i});
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}