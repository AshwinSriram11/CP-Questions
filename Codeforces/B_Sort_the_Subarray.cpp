#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int start = -1,end = -1;
        int i = 0;
        while(i<n){
            if(a[i]!=b[i]){
                end = i;
                if(start==-1){ 
                    start = i;
                }
            }
            i++;
        }
        if(start==-1) start = 0;

        while(start>0 && b[start-1]<=b[start]) start--;
        while(end<n-1 && b[end+1]>=b[end]) end++;

        cout<<start+1<<" "<<end+1<<endl;
    }
    return 0;
}