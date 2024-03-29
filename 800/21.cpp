#include<bits/stdc++.h>
using namespace std;

void helper(string s){
    s = '1'+s+'1';
    int i=0 , j = 1 , ans =0;
    while(j<s.length()&& i<=j){
        if(s[j]=='1'){
            int l = j-i-1;
            ans = max(ans,l);
            i=j;
        }
        j++;
    }
    cout<<ans<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s ="";
        for(int i=0;i<n;i++){
            int x ;
            cin>>x;
            s+= to_string(x);
        }
        helper(s);
    }
    
    
}
