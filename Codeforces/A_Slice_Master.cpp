#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int ans = 0;
    int n = s.size();
    for(int i=0;i<n;i++){
        string s1 = s.substr(i+1,n-i-1);
        char ch = s[i];
        auto pos = s.find(ch,i+1);
        if(pos!=string::npos){
            for(int j=i+1;j<pos;j++){
                
            }
        }
        else{
            ans += 1;
        }
    }

    return 0;
}