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

        if(k>=3) cout<<0<<endl;
        else{
            vector<long long> diff;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    diff.push_back(abs(v[i]-v[j]));
                }
            }

            sort(diff.begin(),diff.end());
            if(k==1) cout<<diff[0]<<endl;
            else{
                sort(diff.begin(),diff.end());
                long long ans = 1e9;
                for(int i=0;i<n;i++){
                    ans = min(ans,abs(diff[0]-v[i]));
                }
                cout<<min(ans,diff[0])<<endl;
            }
        }
    }

    return 0;
}