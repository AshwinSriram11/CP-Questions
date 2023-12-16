#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1) cout<<v[0]-1<<endl;
        else{
            vector<int> diff(n);
            diff[0] = v[0]-1;
            for(int i=1;i<n;i++){
                diff[i] = v[i] - v[i-1];
            }

            ll ans = 0;
            for(int i=0;i<n;i++){
                if(diff[i]>0) ans += diff[i];
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}