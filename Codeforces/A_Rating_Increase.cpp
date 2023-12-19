#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int num1 = 0,num2 = 0;
        int n = s.size();
        bool flag = false;
        for(int i=n-1;i>0;i--){
            if(s[i]=='0') continue;

            num1 = stoi(s.substr(0,i));
            num2 = stoi(s.substr(i,n-i));
            if(num2>num1){
                flag = true;
                break;
            }
        }

        if(flag) cout<<num1<<" "<<num2<<endl;
        else cout<<-1<<endl;
    }   

    return 0;
}