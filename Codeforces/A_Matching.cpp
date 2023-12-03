#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if(s.size()==1){
            if(s[0]=='?') cout<<9<<endl;
            else if(s[0]=='0') cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
            int cnt = 0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='?')cnt++;
            }

            if(s[0]=='?') cout<<pow(10,cnt-1)*9<<endl;
            else if(s[0]!='0') cout<<pow(10,cnt)<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}