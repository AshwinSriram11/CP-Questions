#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int> seat(n+1);
    vector<int> resd(n+1,0);
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=1;i<=n;i++){
        cin>>seat[i];
        q.push(i);
        if(seat[i]) resd[seat[i]] = 1;
    }

    for(int i=1;i<=n;i++){
        if(seat[i]==0){
            while(true || !q.empty()){
                int x = q.top();
                q.pop();
                if(resd[x]==0){
                    resd[x] = 1;
                    break;
                }
            }
        }
        else{
            resd[seat[i]] = 0;
            q.push(seat[i]);
        }
    }    

    for(int i=1;i<=n;i++){
        if(resd[i]==1) cout<<i<<" ";
    }

    cout<<endl;
    return 0;
}