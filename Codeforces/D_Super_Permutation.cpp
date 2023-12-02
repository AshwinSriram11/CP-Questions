#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n&1){
            if(n==1) cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(i&1){
                    cout<<i<<" ";
                }
                else{
                    cout<<n-i<<" ";
                }
            }
            cout<<endl;
        }
    }
}