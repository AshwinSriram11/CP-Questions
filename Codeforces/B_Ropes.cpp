#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(double x,vector<int>&a,int k){
    if(x==0) return true;
    int cnt = 0;
    for(int i=0;i<a.size();i++){
        cnt += floor(a[i]/x);
    }

    return cnt>=k;
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>ropes(n);
    for(int i=0;i<n;i++){
        cin>>ropes[i];
    }

    double lo = 0,hi = 1e8,ans = 1e8;
    int t = 100;
    while(t--){
        double mid = lo + (hi-lo)/2;
        if(check(mid,ropes,k)){
            ans = mid;
            lo = mid;
        }
        else{
            hi = mid;
        }
    }

    cout<<fixed<<setprecision(6)<<ans<<endl;
}