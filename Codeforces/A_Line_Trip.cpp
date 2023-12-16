#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int last = 0,fuel = 0;
        for(int i=0;i<n;i++){
            fuel = max(fuel,v[i]-last);
            last = v[i];
        }

        fuel = max(fuel,2*(x-v[n-1]));
        cout<<fuel<<endl;
    }   

    return 0;
}