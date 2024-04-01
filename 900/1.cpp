#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v = {{1,1},{1,-1},{-1,1},{-1,-1}};

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x1,y1,x2,y2;
        cin>>a>>b>>x1>>y1>>x2>>y2;
        vector<pair<int,int>>v1;
        pair<int,int>p1 = {a,b},p2={b,a};
        for(auto p : v){
            v1.push_back({p1.first*p.first,p1.second*p.second});
        }
        for(auto p : v){
            v1.push_back({p2.first*p.first,p2.second*p.second});
        }
        set<pair<int,int>> from1 , from2;
        for(auto p:v1){
            from1.insert({x1+p.first,y1+p.second});
        }
        for(auto p:v1){
            from2.insert({x2+p.first,y2+p.second});
        }
        int ans =0;
        // for(auto p:from1){
        //     cout<<"{"<<p.first<<","<<p.second<<"},";
        // }cout<<endl;
        // for(auto p:from2){
        //     cout<<"{"<<p.first<<","<<p.second<<"},";
        // }cout<<endl<<endl;
        for(auto p:from1){
            for(auto p3:from2){
                if(p==p3)ans++;
            }
        }cout<<ans<<endl;
        
        
        
    }
    
}
