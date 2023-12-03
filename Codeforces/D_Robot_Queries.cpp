#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;

    while(q--){
        int x,y,l,r;
        cin>>x>>y>>l>>r;

        int a = 0,b = 0;
        l--,r--;
        int i = 0,j = 0;
        bool flag = false;
        if(x==a && y==b) flag = true;
        else{

            while(i<n){
                if(i>=l && i<=r){
                j = r - i;
                }
            else{
                j = i;
            }

            if(s[j]=='R') a++;
            else if(s[j]=='L') a--;
            else if(s[j]=='U') b++;
            else b--;

            if(a==x && b==y){
                flag = true;
                break;
            }
            i++;
            
            }
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}