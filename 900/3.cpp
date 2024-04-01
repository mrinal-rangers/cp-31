#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long maxi = n*(n+1)/2 - (n-k)*(n-k+1)/2;
        long long mini = k*(k+1)/2;
        if(x<=maxi && x>=mini)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}
