#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int count = 0;
        for(int i=0;i<=64;i++){
            if((n>>i)&1) count++;
        }
        string ans = (count == 1  ? "NO" : "YES");
        cout<<ans<<endl;
    }
    
}
