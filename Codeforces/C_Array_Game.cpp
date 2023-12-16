#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        if(k<=2){
            long long ans = v[0];
            for(int i=1;i<n;i++){
                ans = min(ans,abs(v[i]-v[i-1]));
            }
                
            if(k==1) {
                cout<<ans<<endl;
                continue;
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    long long x = v[i] - v[j];
                    int k = lower_bound(v.begin(),v.end(),x) - v.begin();
                    if(k<n) ans = min(ans,v[k] - x);
                    if(k>0) ans = min(ans,x - v[k-1]);
                }
            }
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}