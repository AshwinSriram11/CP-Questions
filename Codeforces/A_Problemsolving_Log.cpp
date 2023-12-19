#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<int> v(26,0);

        for(int i=0;i<n;i++){
            v[s[i]-'A']++;
        }

        int cnt = 0;
        for(int i=0;i<26;i++){
            if(v[i]>=i+1)cnt++;
        }

        cout<<cnt<<endl;
    }   

    return 0;
}