// https://codeforces.com/contest/1822/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin>>q;

    while(q--){
        int n,t;
        cin>>n>>t;

        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int ans = 0,ind = -1;
        for(int i=0;i<n;i++){
            if(a[i]+i<=t && ans<b[i]){
                ans = b[i];
                ind = i + 1;
            }
        }
        cout<<ind<<endl;
    }
    return 0;
}