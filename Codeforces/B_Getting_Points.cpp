#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;

    while(tc--){
        long long n,p,l,t;
        cin>>n>>p>>l>>t;

        long long k = ((n-1)/7) + 1;
        long long rest = n;
        long long x = p/(2*t+l);
        long long y = p%(2*t+l);
        if(x<k/2 && y>=0){
            rest -= (x+1);
        }
        else if(x==k/2 && y==0){
            rest -= x;
        }
        else if(x==k/2 && t>0){
            rest -= x;
            p -= x*(2*t+l);
            if(k&1){
                p -= (t+l);
                rest--;
            }
            
            if(p>0){
                long long a = p/l;
                long long b = p%l;
                rest -= a;
                if(b>0) rest--;
            }
        }
        else{
            p -= (k*t) + ((k+1)/2)*l;
            rest -= (k+1)/2;

            if(p>0){
                long long a = p/l;
                long long b = p%l;
                rest -= a;
                if(b>0) rest--;
            }
        }

        cout<<rest<<endl;
    }
    return 0;
}