#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;

    while(tc--){
        long long n,p,l,t;
        cin>>n>>p>>l>>t;

        long long k = (n+6)/7;

        long long lo = 1,hi = n,workDays = n;
        while(lo<=hi){
            long long mid = (lo+hi)/2;

            long long x = mid*l + min(k,2*mid)*t;
            if(x>=p){
                workDays = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }

        cout<<n-workDays<<endl;
    }
    return 0;
}