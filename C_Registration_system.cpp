#include<bits/stdc++.h>
using namespace std;
#define ll long long
   
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(mp.find(s)!=mp.end()){
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
        else{
            cout<<"OK"<<endl;
            mp[s]++;
        }
    }
    return 0;
}