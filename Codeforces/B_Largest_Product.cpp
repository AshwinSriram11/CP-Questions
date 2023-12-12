#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        long long ans = 1,mod = 1e9+7;
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());

        for(int i=0;i<n;i++){
            if(b[i]!=1 && a[i]!=1){
                a[i] = (a[i]*b[i])%mod;
            }
            else{
                a[i] = a[i] + b[i];
            }
        }

        for(int i=0;i<n;i++){
            ans = (ans*a[i])%mod;
        }

        cout<<ans<<endl;
    }
    return 0;
}