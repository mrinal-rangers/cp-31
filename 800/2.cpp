#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int ans= 0;
        int last = 0;
        for(int i=0;i<n;i++){
            int a; 
            cin>>a;
            ans = max(ans, a-last);
            last=a;
        }
        ans = max(ans,2*(x-last));
        cout<<ans<<endl;
    }
    
}