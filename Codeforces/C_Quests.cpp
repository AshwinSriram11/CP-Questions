#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int ans = 0,maxb = 0,left = k-1,asum = 0;
        for(int i=0;i<n;i++){
            if(left<0)break;
            maxb = max(maxb,b[i]);
            asum += a[i];
            ans = max(ans,asum + left*maxb);
            left--;
        }

        cout<<ans<<endl;
    }   

    return 0;
}