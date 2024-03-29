#include<bits/stdc++.h>
using namespace std;


void helper(int n){
  int y =1;
  int ans= 0;
  while(n>=y){
      for(int i=1;i<=9;i++){
          int z= i*y;
          if(z<=n) ans++;
          else break;
      }
      y*=10;
  }
  cout<<ans<<endl;
  
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        helper(n);
    }
    
}
