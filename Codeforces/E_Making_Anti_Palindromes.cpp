#include<bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(n&1) cout<<-1<<endl;
        else{
            bool flag = true;
            vector<int> cnt(32,0);
            for(int i=0;i<n;i++){
                cnt[s[i]-'a']++;
            }

            for(int i=0;i<32;i++){
                if(cnt[i]>n/2){
                    flag = false;
                    break;
                }
            }

            if(flag){
                int k = 0;
                vector<int> pair(32,0);
                for(int i=0;i<n/2;i++){
                    if(s[i]==s[n-i-1]){
                        k++;
                        pair[s[i]-'a']++;
                    }
                }

                int ans = 0;
                for(int i=0;i<32;i++){
                    if(pair[i]*2>k){
                        ans = pair[i];
                    }
                }

                if(ans==0) ans = (k+1)/2;
                cout<<ans<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}