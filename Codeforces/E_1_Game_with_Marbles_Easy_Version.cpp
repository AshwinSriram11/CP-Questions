#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        multiset<pair<int,int>> st;
        vector<pair<pair<int,int>,int>> mp;
        for(int i=0;i<n;i++){
            if(b[i]>a[i]){
                mp.push_back({{b[i],a[i]},-1});
                st.insert({-b[i],-a[i]});
            }
            else{
                mp.push_back({{a[i],b[i]},1});
                st.insert({-a[i],-b[i]});
            }
        }

        sort(mp.rbegin(),mp.rend());
        long long ans = 0;
        int j=1;
        for(auto it:st){
            int u = -it.first,v = -it.second;
            int sign = 0;
            for(int i=0;i<mp.size();i++){
                if(mp[i].first.first==u && mp[i].first.second==v){
                    sign = mp[i].second;
                    mp[i].first.first = -1e9;
                    mp[i].first.second = -1e9;
                    break;
                }
            }
            if(j&1){
                if(sign==-1){
                    ans += v-1;
                }
                else if(sign==1){
                    ans += u-1;
                }
            }
            else{
                if(sign==-1){
                    ans -= (u-1);
                }
                else if(sign==1){
                    ans -= (v-1);
                }
            }
            j++;
        }
        cout<<ans<<endl;

    }

    return 0;
}