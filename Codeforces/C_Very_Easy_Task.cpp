#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll time,int n,int x,int y){
    ll m1 = time/x,m2 = (time-x)/y;
    return m1 + m2 >= n;
}

int main(){
    int n,x,y;
    cin>>n>>x>>y;

    if(y<x){
        swap(x,y);
    }
    ll lo = 1,hi = y*n,ans = y*n;
    while(lo<=hi){
        ll mid = lo + (hi-lo)/2;
        if(check(mid,n,x,y)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }

    cout<<ans<<endl;
    return 0;
}