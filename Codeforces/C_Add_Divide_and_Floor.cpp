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

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        if(n==1) cout<<0<<endl;
        else{
            long long k = 0;
            int cnt = 0;

            sort(v.begin(),v.end());
            int l = v[0],r = v[n-1];
            vector<int> tur;

            while(l!=r){
                k = (l+r)/2;
                tur.push_back(k);
                l = (l+k)/2;
                r = (r+k)/2;
                cnt++;
            }

            cout<<cnt<<endl;
            if(cnt<=n){
                for(int i=0;i<tur.size();i++){
                    cout<<tur[i]<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}