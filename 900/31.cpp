#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       bool found = false;
       int steps = 0;
       while(1){
           if(n==1){ found = true; break; }
           if(n%6==0) n/=6;
           else{
               if(n%3==0) n*=2;
               else {
                   break;
               }
           }
           steps++;
       }
       if(found){
           cout<<steps<<endl;
       }else{
           cout<<-1<<endl;
       }
       
       
       
       
    }
    
    
}
