#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);
        long long ans = 0;
        set<long long> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }

        if(n==1){
            cout<<1<<endl;
        }
        else{
            sort(a.begin(),a.end());
            long long x = abs(a[1]-a[0]);
            for(int i=2;i<n;i++){
                x = __gcd(x,abs(a[i]-a[i-1]));
            }

            long long maxi = a[n-1];
            long long k = maxi - x;

            while(true){
                if(st.find(k)!=st.end()){
                    k -= x;
                }
                else{
                    break;
                }
            }

            for(int i=0;i<n;i++){
                ans += (maxi-a[i])/x;
            }

            ans += (maxi-k)/x;
            cout<<ans<<endl;
        }
        
    }
    return 0;
}