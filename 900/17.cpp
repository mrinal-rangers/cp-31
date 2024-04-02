#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int>freq;
        for(auto x:arr){
            freq[x]++;
        }
        int max_freq = 0;
        for(auto it=freq.begin();it!=freq.end();it++){
            max_freq= max(max_freq,it->second);
        }
        int steps = 0;
        while(max_freq <n){
            steps++;
            int x = max_freq;
            if(max_freq + x <= n) steps += x;
            else steps += (n-max_freq);
            max_freq *=2;
        }
        cout<<steps<<endl;
        
        
        
        
    }
    
}
