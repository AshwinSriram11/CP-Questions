#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    int n;
    cin>>n;

    vector<int> taps(n);
    for(int i=0;i<n;i++){
        cin>>taps[i];
    }

    vector<pair<int,int>> range(n);
    for(int i=0;i<n;i++){
        range[i].first = max(0,i-taps[i]);
        range[i].second = min(n-1,i+taps[i]);
    }

    sort(range.begin(),range.end(),cmp);

    int ans = 0,l = n,r = 0;
    for(int i=0;i<n;i++){
        if(l==0 && r==n-1) break;
        
        if(range[i].first<l || range[i].second>r){
            ans++;
            l = min(l,range[i].first);
            r = max(r,range[i].second);
        }
    }
    
    cout<<ans<<endl;
    return 0;
}