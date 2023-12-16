#include<bits/stdc++.h>
using namespace std;

#define ll long long;

vector<int> dist,vis,leaf;
vector<int> l,r;
vector<vector<pair<int,int>>> adj;

void dfs(int node,int dis,vector<int>&dist,vector<int>&vis,vector<vector<pair<int,int>>>&adj){
    vis[node] = 1;
    dist[node] = dis;

    for(auto it:adj[node]){
        if(!vis[it.first]){
            dfs(it.first,dis + it.second,dist,vis,adj);
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        l.clear(),r.clear();
        l.resize(n+1);
        r.resize(n+1);

        for(int i=1;i<=n;i++){
            cin>>l[i]>>r[i];
        }

        adj.clear();
        adj.resize(n+1);
        leaf.clear();

        for(int  i=1;i<=n;i++){
            if(l[i]!=0){
                adj[i].push_back({l[i],(s[i-1]!='L')});
            }

            if(r[i]!=0){
                adj[i].push_back({r[i],(s[i-1]!='R')});
            }

            if(l[i]==0 && r[i]==0) leaf.push_back(i);
        }
        
        dist.clear(),vis.clear();
        dist.resize(n+1);
        vis.resize(n+1);
        dfs(1,0,dist,vis,adj);

        int minDist = 1e9;
        for(int i=0;i<leaf.size();i++){
            minDist = min(minDist,dist[leaf[i]]);
        }

        cout<<minDist<<endl;
    }   

    return 0;
}