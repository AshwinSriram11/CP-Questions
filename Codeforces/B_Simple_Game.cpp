#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,int a,int b,bool turn,vector<int>& v){
    if(i>j) return a-b;

    if(turn) return max(f(i+1,j,a+v[i],b,false,v),f(i,j-1,a+v[j],b,false,v));
    return max(f(i+1,j,a,b+v[i],true,v),f(i,j-1,a,b+v[j],true,v));
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int a = 0,b = 0;
    bool turn = true;

    int ans = f(0,n-1,a,b,turn,v);
    cout<<ans<<endl;
    return 0;
}