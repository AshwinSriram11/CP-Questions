#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.size();
        int cnt1 = 0;
        string t = "";
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt1++;
            t += (s[i]=='1') ? '0':'1'; 
        }

        int op = 0;
        int sw = min(cnt1,n-cnt1);
        int pw = sw;
        for(int i=0;i<n;i++){
            if(t[i]=='0' && sw){
                t[i] ='1';
                sw--;
            }
            else if(t[i]=='1' && pw){
                t[i] = '0';
                pw--;
            }
        }

        int ind = -1;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                ind = i;
                break;
            }
        }

        if(ind!=-1)op += n-ind;
        cout<<op<<endl;
    }   

    return 0;
}