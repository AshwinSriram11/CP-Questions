#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    while(k--){
        int q;
        cin>>q;

        int lo = 0,hi = n-1,ans = -1;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            if(v[mid]>q){
                hi = mid - 1;
            }
            else{
                ans = mid;
                lo = mid + 1;
            }
        }
        ans++;
        cout<<ans<<endl;
    }

    return 0;
}