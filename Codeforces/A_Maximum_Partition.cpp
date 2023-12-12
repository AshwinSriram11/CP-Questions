#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    long long ans = 0;

    if(v[0]>=0){
        for(int i=0;i<n;i++){
            if(v[i]<0) ans += -1*v[i];
            else ans += v[i];
        }
    }
    else{
        ans += v[0];
        for(int i=1;i<n;i++){
            if(v[i]<0) ans += -1*v[i];
            else ans += v[i];
        }
    }

    cout<<ans<<endl;

    return 0;
}