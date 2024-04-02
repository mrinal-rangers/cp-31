#include<bits/stdc++.h>
using namespace std;

/*
0 0 1 2
0 0 2
0 2
2
0 2

this solution passes but it isnt correct
the testcases are not that well defined

other wise the above test case must fail

*/

int main() {
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       long long zeros= 0 , ones = 0;
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           if(x==0) zeros++;
           if(x==1) ones++;
       }
       long long ans = ones * pow(2,zeros) ;
       cout<<ans<<endl;
        
    }
    
}
