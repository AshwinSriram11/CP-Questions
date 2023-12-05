#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<int> cnt(26,0);
        for(int i=0;i<n;i++){
            cnt[s[i]-'a']++;
        }

        int maxi = *max_element(cnt.begin(),cnt.end());

        if(maxi*2>=n) cout<<2*maxi - n<<endl;
        else cout<<n%2<<endl;
    }
    return 0;
}