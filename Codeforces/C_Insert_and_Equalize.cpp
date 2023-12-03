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
        unordered_set<long long> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }

        if(n==1){
            cout<<1<<endl;
        }
        else{
            vector<long long> diff;
            for(int i=1;i<n;i++){
                diff.push_back(abs(a[i] - a[i-1]));
            }

            long long x = diff[0];
            for(int i=1;i<diff.size();i++){
                x = __gcd(x,diff[i]);
            }

            long long maxi = *max_element(a.begin(),a.end());
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