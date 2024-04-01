#include<bits/stdc++.h>
using namespace std;
/*
min diff = 3, diff = 4

a b c
b a c
b c a
c b a
*/


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long>prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]+ arr[i];
        }
        for(int i=0;i<q;i++){
           long long l,r,k;
           cin>>l>>r>>k;
           l--; r--;
           long long old_sum = prefix[n-1];
           long long new_sum  = old_sum  - prefix[r] ;
           if(l!=0) new_sum  += prefix[l-1];
           long long extra = (r-l+1)*k;
           new_sum += extra;
           long long two =2;
           if(new_sum % two == 0) cout<<"NO"<<endl;
           else cout<<"YES"<<endl;
        }
    }
    
}
