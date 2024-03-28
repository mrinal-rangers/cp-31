#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
            
        }
        if(mp.size()==1)cout<<"YES";
        if(mp.size()==2){
            vector<int>freq;
            for(auto it=mp.begin();it!=mp.end();it++){
                freq.push_back(it->second);
            }
            if(abs(freq[0]-freq[1])<2) cout<<"YES";
            else cout<<"NO";
        }
        if(mp.size()>2) cout<<"NO";
        cout<<endl;
        
    }
    
}
