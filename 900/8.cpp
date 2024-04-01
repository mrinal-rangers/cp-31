#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans =1 ;
        string s ="";
        for(int i=0;i<n;i++){
            char c ;
            cin>>c;
            s+=c;
        }
        int len =1;
        for(int i=1;i<n;i++){
            char c= s[i];
            if(c==s[i-1]) len ++;
            else len =1;
            ans = max(ans,len);
        }
        cout<<ans+1<<endl;
        
        
    }
    
}
