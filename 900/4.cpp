#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        long long ans = b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=a) x=a-1;
            ans += x;
        }
        cout<<ans<<endl;
        
    }
    
}
