#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt = 0;
        bool flag = false;
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i]=='.') flag = true;

            if(s[i]=='.')cnt++;
        }

        if(s[n-2]=='.')cnt++;
        if(s[n-1]=='.')cnt++;

        if(flag) cout<<2<<endl;
        else cout<<cnt<<endl;
    }

    return 0;
}