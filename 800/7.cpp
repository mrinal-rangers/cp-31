#include<bits/stdc++.h>
using namespace std;

bool check(string x, string s){
    int n = x.length(),m = s.length();
    for(int i=0;i<=n-m;i++){
        string s1 = x.substr(i,m);
        if(s1==s) return true;
    }
    return false;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans = -1;
        int turns= 0;
        while(turns <7){
            if(x.length()>=s.length()){
                if(check(x,s)) {
                    ans = turns;
                    break;
                }
            }
            x = x+x;
            turns ++;
        }
        cout<<ans<<endl;
        
    }
    
}
