#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       int n=s.length();
       stack<char>st;
       int steps =0;
       for(auto c:s){
           if(st.empty()){
               st.push(c);
           }
           else{
               char t = st.top();
               if(t!=c) {st.pop(); steps++;}
               else st.push(c);
           }
       }
       if(steps%2) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    
    
}
