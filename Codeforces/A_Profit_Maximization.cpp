#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }    

    ll ans = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) continue;
        int last = v[i];
        ll sum = v[i];
        for(int j=i+1;j<n;j++){
            if(v[j]%last==0 && v[j]!=0){
                sum += v[j];
                last = v[j];
            }
        }

        last = v[i];
        for(int j=i-1;j>=0;j--){
            if(v[j]!=0 && last%v[j]==0){
                sum += v[j];
                last = v[j];
            }
        }
        ans = max(ans,sum);
    }

    cout<<ans<<endl;

    return 0;
}