#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        cout<<((abs(b-c))%2==0)<<" "<<((abs(c-a))%2==0)<<" "<<((abs(a-b))%2==0)<<endl;
    }   

    return 0;
}