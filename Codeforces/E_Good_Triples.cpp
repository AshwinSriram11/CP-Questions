#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long ans = 1;
        while(n>0){
            int d = n%10;
            n /= 10;

            int trip = 0;
            for(int i=0;i<=d;i++){
                for(int j=0;j<=d;j++){
                    if(d-i-j>=0) trip++;
                }
            }

            ans *= trip;
        }

        cout<<ans<<endl;
    }
    return 0;
}