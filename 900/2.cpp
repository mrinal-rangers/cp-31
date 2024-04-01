#include<bits/stdc++.h>
using namespace std;

/*
aaaabbbbcccc
a4 , b4,c4
k=3 ,odd=0 ,two =0,three=0
*/
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>freq(26,0);
        for(auto c:s){
            freq[c-'a']++;
        }
        int odd = 0;
        for(auto x:freq){
            if(x%2)odd ++;
        }
        if(k<=odd){
            if(k==odd || k== odd-1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }
    
}
