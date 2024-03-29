#include<bits/stdc++.h>
using namespace std;

int helper(string s){
    int n=s.length();
    int i=0,j=n-1;
    while(i<=j){
        int x = s[i]-'0', y= s[j]-'0';
        if(x^y == 1){
            i++;
            j--;
        }else break;
    }
    return j-i+1;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            s += to_string(c-48);
        }
        cout<<helper(s)<<endl;
    }
    
}
