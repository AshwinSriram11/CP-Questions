#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i].first;
            v[i].second = i;
        }

        sort(v.begin()+1,v.end());
        vector<long long> ans(n+1,0),nxt(n+1),pf(n+1);
        nxt[0] = 0,pf[0] = 0;
        for(int i=1;i<=n;i++){
            if(nxt[i-1]>=i){
                nxt[i] = nxt[i-1];
                pf[i] = pf[i-1];
            }
            else{
                pf[i] = pf[i-1] + v[i].first;
                nxt[i] = i;
                while(nxt[i]+1<=n && pf[i]>=v[nxt[i]+1].first){
                    nxt[i]++;
                    pf[i] += v[nxt[i]].first;
                }
            }

            ans[v[i].second] = nxt[i];
        }

        for(int i=1;i<=n;i++){
            cout<<ans[i]-1<<" "; 
        }
        cout<<endl;
    }

    return 0;
}