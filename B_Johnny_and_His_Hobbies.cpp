// https://codeforces.com/problemset/problem/1362/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

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

        vector<int> c;
        int m = 0;
        while((1<<m)<=v[n-1]){
            m++;
        }

        int ans = 0;
        for(int i=1;i<(1<<m);i++){
            for(int j=0;j<n;j++){
                c.push_back(v[j] ^ i);
            }
            sort(c.begin(),c.end());
            if(v==c){
                ans = i;
                break;
            }
            c.clear();
        }

        cout<<(ans!=0?ans:-1)<<endl;
    }
    return 0;
}