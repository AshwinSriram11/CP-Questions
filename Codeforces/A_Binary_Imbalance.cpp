#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        if(n==1){
            if(s[0]=='0')cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            int cnt0 = 0,cnt1 = 0;
            for(int i=0;i<n;i++){
                if(s[i]=='0')cnt0++;
                else cnt1++;
            }

            if(cnt0!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}