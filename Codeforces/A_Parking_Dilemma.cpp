#include <bits/stdc++.h>
using namespace std;

bool check(long long mid,int k,vector<long long>& cars){
    int cnt = 0;
    int l = 0,r = 0,n = cars.size();
    while(l<=r && r<n){
        if(cars[r]-cars[l]+1>mid){
            cnt = max(cnt,r-l);
            while(cars[r]-cars[l]+1>mid) l++;
        }
        else{
            r++;
        }
    }
    cnt = max(cnt,r-l);
    return cnt>=k;
}

int main()
{
    int n;
    cin>>n;

    vector<long long> cars(n);
    for(int i=0;i<n;i++){
        cin>>cars[i];
    }

    sort(cars.begin(),cars.end());

    int k;
    cin>>k;

    long long lo = 1,hi = cars[n-1],ans = cars[n-1];
    while(lo<=hi){
        long long mid = lo + (hi-lo)/2;
        if(check(mid,k,cars)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    cout<<ans<<endl;
    return 0;
}