#include <bits/stdc++.h>
using namespace std;

bool check(int d,vector<int>&l,vector<int>&r){
    int n = l.size();
    
    int left = 0,right = 0;
    for(int i=0;i<n;i++){
        left -= d;
        right += d;
        left = max(left,l[i]),right = min(right,r[i]);
        if(left>right) return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> l(n),r(n);
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i];
        }


        int lo = 0,hi = 1e9,ans = 1e9;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(check(mid,l,r)){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}