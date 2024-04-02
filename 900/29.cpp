#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       bool b= false;
      for(int i=1;i<n-1;i++){
          if(v[i]>v[i-1] && v[i]>v[i+1]){
              cout<<"YES"<<endl;
              cout<<i<<" "<<i+1<<" "<<i+2<<endl;
              b=true;
              break;
          }
      }
      if(!b) cout<<"NO"<<endl;
       
       
       
       
    }
    
    
}
