#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    
    int q;
    cin>>q;
    
    while(q--){
        int l,r;
        cin>>l>>r;

        int lo = 0,hi = n-1,start = n;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            if(v[mid]>=l){
                start = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }

        lo = 0,hi = n-1;
        int end = -1;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;

            if(v[mid]<=r){
                end = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }

        cout<<end - start + 1<<" ";
    }
}