#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        char ch = s[0];
        char num = s[1];

        for(char c='a';c<='h';c++){
            if(c!=ch)cout<<c<<num<<endl;
        }

        for(char c='1';c<='8';c++){
            if(c!=num)cout<<ch<<c<<endl;
        }
    }
    return 0;
}