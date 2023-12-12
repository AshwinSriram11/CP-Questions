#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n;
    cin>>n;

    int cnt1 = 0,cnt2 = 0,ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='S')cnt1++;
        else cnt2++;
    }

    if(n>s.size()) n = s.size();

    if(n<=min(cnt1,cnt2)){
        if(cnt1>=cnt2){
            cnt2 -= n;
            ans = cnt1 + n - cnt2;
        }
        else{
            cnt1 -= n;
            ans = cnt2 + n - cnt1; 
        }
    }
    else if(n>min(cnt1,cnt2) && n<max(cnt1,cnt2)){
        
    }

    cout<<ans<<endl;

    return 0;
}