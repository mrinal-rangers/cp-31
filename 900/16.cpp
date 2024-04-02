#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        vector<vector<int>>v(26);
        for(int i=0;i<s1.length();i++){
            char c=s1[i];
            v[c-'A'].push_back(i);
        }
        for(int i=0;i<26;i++){
            sort(v[i].rbegin(),v[i].rend());
        }
        vector<int>freq(26);
        for(auto c:s2){
            freq[c-'A']++;
        }
        string ans = "YES";
        for(int i=0;i<26;i++){
            int f= freq[i];
            if(f>v[i].size()){
                ans="NO";
                break;
            }
            v[i].resize(f);
            reverse(v[i].begin(),v[i].end());
        }
        // for(int i=0;i<26;i++){
        //     if(v[i].size()){
        //         char c= i+'A';
        //         cout<<c<<" -> ";
        //         for(auto x:v[i]){
        //             cout<<x<<" ";
        //         }cout<<endl;
        //     }
           
        // }
        vector<int>index(26,0);
        int low =0;
        if(ans=="YES"){
            for(auto c:s2){
                if(v[c-'A'].size() > index[c-'A']){
                    if(v[c-'A'][index[c-'A']] < low){
                        ans = "NO";
                        break;
                    }
                    low = v[c-'A'][index[c-'A']];
                    index[c-'A']++;
                }else{
                    ans = "NO";
                    break;
                }
            }
        }
        
        cout<<ans<<endl;
        
        
        
    }
    
}
