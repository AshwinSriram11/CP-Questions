#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}

int main()
{
    int n;
    cin>>n;

    vector<int> score(n);
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>score[i];
        v[i] = {score[i],i};
    }

    int teamSize,k;
    cin>>teamSize>>k;

    sort(v.begin(),v.end(),cmp);

    int l1 = 0,r1 = k-1,l2 = n-k,r2 = n-1;
    int ans = 0;
    int i = 0;
    while(teamSize){
        while(v[i].first<0){
            i++;
            i = i%n;
        }
        if(r1<l2){
            if(l1<=v[i].second && v[i].second<=r1){
                ans += v[i].first;
                v[i].first = -1;
                r1++;
                teamSize--;
            }
            else if(l2<=v[i].second && v[i].second<=r2){
                ans += v[i].first;
                v[i].first = -1;
                l2--;
                teamSize--;
            }
        }
        else{
            ans += v[i].first;
            v[i].first = -1;
            teamSize--;
        }
        i++;
        i = i%n;
    }

    cout<<ans<<endl;

    return 0;
}