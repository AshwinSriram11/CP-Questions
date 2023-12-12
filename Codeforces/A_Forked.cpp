#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;
    
        int x1,y1;
        cin>>x1>>y1;

        int x2,y2;
        cin>>x2>>y2;

        int ans = 0;

        if(a==b){
            int delRow[] = {a,a,-a,-a};
            int delCol[] = {a,-a,a,-a};

            for(int i=0;i<4;i++){
                int x = x1 + delRow[i];
                int y = y1 + delCol[i];
        
                int dis = (x2-x)*(x2-x) + (y2-y)*(y2-y);
                if(dis==(a*a + b*b)) ans++;
            }
        }
        else{
            int delRow[] = {a,b,-b,-a,-a,-b,b,a};
            int delCol[] = {b,a,a,b,-b,-a,-a,-b};

            for(int i=0;i<8;i++){
                int x = x1 + delRow[i];
                int y = y1 + delCol[i];
        
                int dis = (x2-x)*(x2-x) + (y2-y)*(y2-y);
                if(dis==(a*a + b*b)) ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}