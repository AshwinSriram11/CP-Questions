#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int q;
    cin>>q;

    vector<int> v(30,0);
    while(q--){
        int a,b;
        cin>>a>>b;

        if(a==1){
            v[b]++;
        }
        else{
            bool flag = false;

            for(int i=29;i>=0;i--){
                if(v[i]>0){
                    int x = pow(2,i);
                    int c = b/x;

                    if(v[i]>=c){
                        b -= c*x;
                    }
                    else{
                        b -= v[i]*x;
                    }
                }
                if(b==0){
                    flag = true;
                    break;
                }
            }

            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}