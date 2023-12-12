#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,int> p,int s,int e,map<pair<int,int>,vector<int>>& mp){
    if(mp.find(p)==mp.end()) return false;

    auto it = lower_bound(mp[p].begin(),mp[p].end(),s);
    return it!=mp[p].end() && *it<=e;
}

int main(){
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;

    map<pair<int,int>,vector<int>> mp;
    // to store the indexes in a vector for a coordinate (xi,yi)

    vector<pair<int,int>> pos(n+1);
    // to store the coordinates (x,y) at any general index i

    pos[0] = {0,0}; // starting point
    for(int i=0;i<n;i++){
        pos[i+1].first = pos[i].first + (s[i]=='R') - (s[i]=='L');
        pos[i+1].second = pos[i].second + (s[i]=='U') - (s[i]=='D');
    }

    for(int i=0;i<=n;i++){
        mp[pos[i]].push_back(i);
    }

    while(q--){
        int x,y,l,r;
        cin>>x>>y>>l>>r;

        // rx and ry are the coordinates that should lie in the range (l,r)
        int rx = pos[l-1].first + pos[r].first - x;
        int ry = pos[l-1].second + pos[r].second - y;

        bool flag = check({x,y},0,l-1,mp) | check({rx,ry},l,r-1,mp) | check({x,y},r,n,mp);

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}