#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool sorted = true;
        int last = -1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a<last) {sorted=false;}
            else last = a;
        }
        
        if(sorted || k>1){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    
}