#include<bits/stdc++.h>
using namespace std;

int main() {

        int n;
        cin>>n;
        int ans= INT_MAX;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            ans = min(ans,abs(a));
        }
        cout<<ans<<endl;
    
}
