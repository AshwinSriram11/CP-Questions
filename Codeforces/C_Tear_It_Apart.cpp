#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        map<char,int> mp;
        int n = s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        int cnt = 0;
        char ch;
        for(auto it:mp){
            if(it.second>cnt){
                ch = it.first;
                cnt = it.second;
            }
        }
        int ans = 0;

        if(cnt==1){
            ans = (n>1)?log2(n/2) + 1:0;
        }
        else{
            vector<int> pos;
            for(int i=0;i<n;i++){
                if(s[i]==ch){
                    pos.push_back(i);
                }
            }

            int m = pos.size();
            for(int i=1;i<m;i++){
                if(pos[i]-pos[i-1]>1){
                    int x = pos[i] - pos[i-1] - 1;
                    int temp = log2(x) + 1;
                    ans = max(ans,temp);
                }
            }

            int first = pos[0]>0 ? log2(pos[0]) + 1 : 0;
            int last = pos[m-1]<n-1 ? log2(n-pos[m-1]-1) + 1 : 0;

            ans = max({ans,first,last});
        }
        cout<<ans<<endl;
    }
    return 0;
}