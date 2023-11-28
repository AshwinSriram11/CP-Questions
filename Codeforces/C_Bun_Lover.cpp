// https://codeforces.com/contest/1822/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cout<<(n*1LL*n + 2*n*1LL + 2)<<endl;
    }
    return 0;
}