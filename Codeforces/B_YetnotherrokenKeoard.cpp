#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string ans = "";
        vector<pair<int,char>> up,lo;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                if(up.size()>0) up.pop_back();
            }
            else if(s[i]=='b'){
                if(lo.size()>0) lo.pop_back();
            }
            else{
                if(isupper(s[i])){
                    up.push_back({i,s[i]});
                }
                else lo.push_back({i,s[i]});
            }
        }

        int i = 0,j = 0;
        while(i<up.size() && j<lo.size()){
            if(up[i].first<lo[j].first){
                ans += up[i].second;
                i++;
            }
            else{
                ans += lo[j].second;
                j++;
            }
        }

        while(i<up.size()){
            ans += up[i].second;
            i++;
        }

        while(j<lo.size()){
            ans += lo[j].second;
            j++;
        }

        cout<<ans<<endl;
    }
    return 0;
}