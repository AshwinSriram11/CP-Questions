#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        vector<int> ag(v[n-1]+1,0);
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int x = __gcd(v[i],v[j]);
                ag[x] += n - j - 1;
            }
        }

        ll sum = 0;
        for(int i=1;i<ag.size();i++){
            sum += i*ag[i];
        }

        cout<<sum<<endl;
    }

    return 0;
}