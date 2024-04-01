#include<bits/stdc++.h>
using namespace std;

/*
odd numbers m answer humesha 1 ayega
because for two consecutive numbers , ek number even hoga
3*4*5  = even 
*/

int helper(long long n){
    int ans =0;
    for(long long i=1;i<=n;i++){
        if(n%i==0){
            ans++;
        }else break;
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int ans = helper(n);
        cout<<ans<<endl;
    }
    
}
