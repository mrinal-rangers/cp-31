#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        s= "#"+s+"#";
        n=s.length();
        int i=0,j=1,ans=0;
        while(i<=j && j<n){
            if(s[j]=='#'){
                int l = j-i-1;
                if(l>=3) {ans=2; break;} 
                if(l==1) ans++;
                if(l>1) ans+=2;
                i=j;
            }
            j++;
        }
        cout<<ans<<endl;
        
        
    }
    
}