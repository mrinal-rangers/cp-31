#include<bits/stdc++.h>
using namespace std;

void helper(long long n , long long k){
    long long two =2;
    if(n % two == 0){
        cout<<"YES"<<endl;
    }
    else if(k%two ==0){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        helper(n,k);
    }
    
}
