#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
       long long a,b;
       cin>>a>>b;
       long long c = min(a,b) , d = max(a,b);
       a = c , b=d ;
       d = abs(a-b);
       if(d==0) cout<<0<<" "<<0<<endl;
       else{
            long long y= a%d ;
            cout<<d<<" "<<min(d-y,y)<<endl;
       }

    }
    
}
