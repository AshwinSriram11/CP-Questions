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
        int tar;
        cin>>tar;

        int lo = 0,hi = n-1,ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(v[mid]==tar){
                ans = mid;
                break;
            }
            else if(v[mid]<tar){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }

        if(ans==-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}