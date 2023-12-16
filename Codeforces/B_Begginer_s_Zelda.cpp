#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> degree(n+1,0);
        for(int i=0;i<n-1;i++){
            int a,b;
            cin>>a>>b;
            degree[a]++;
            degree[b]++;
        }

        int ans = 0;
        for(int i=1;i<=n;i++){
            if(degree[i]==1) ans++;
        }

        ans = (ans+1)/2;
        cout<<ans<<endl;
    }   

    return 0;
}