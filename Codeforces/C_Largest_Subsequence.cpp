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
        string s;
        cin>>s;

        string a = s;
        sort(a.begin(),a.end());
        if(a==s) cout<<0<<endl;
        else{
            vector<int> cnt(26,0);
            vector<int> lls(n);
            for(int i=n-1;i>=0;i--){
                lls[i] = cnt[s[i]-'a'];
                for(int j=0;j<s[i]-'a';j++){
                    cnt[j]++;
                }
            }

            int ans = 0;
            vector<int> v;
            for(int i=0;i<n;i++){
                if(lls[i]==0){
                    ans++;
                    v.push_back(i);
                }
            }

            int k = v.size();
            for(int i=0;i<k/2;i++){
                swap(s[v[i]],s[v[k-i-1]]);
            }

            if(s==a) cout<<ans-1<<endl;
            else cout<<-1<<endl;
        }
    }   

    return 0;
}