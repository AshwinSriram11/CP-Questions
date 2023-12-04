#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll a,ll w,ll l,ll n){
    ll x = a/w;
    ll y = a/l;
    return x*y >= n;
}

int main(){
    ll w,l,n;
    cin>>w>>l>>n;

    ll lo = 0,hi = 1,ans;
    while(!check(hi,w,l,n)) hi*=2;

    ans = hi;
    while(lo<=hi){
        ll mid = lo + (hi-lo)/2;
        if(check(mid,w,l,n)){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }

    cout<<ans<<endl;
    return 0;
}