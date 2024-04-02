#include<bits/stdc++.h>
using namespace std;

/*
100025
520001
*/
int helper(string s, string s1){
    int n=s.length();
    bool first= false;
    int ans =0;
    for(int i=0;i<n;i++){
        if(s[i]==s1[0] && !first)first = true;
        else if(s[i]==s1[1] && first) return ans;
        else ans++;
    }
    return n;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s = "00"+to_string(n);
        reverse(s.begin(),s.end());
        vector<string>v = {"00","52","05","57"};
        int ans = s.length();
        for(auto s1:v){
            ans = min(ans,helper(s,s1));
        }
        cout<<ans<<endl;
        
    }
    
}
