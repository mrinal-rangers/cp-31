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
        bool zero =false;
        bool allzeros =true;
        for(int i=0;i<n;i++){
            if(arr[i]==0) zero = true;
            else allzeros= false;
        }
        if(!zero){
            cout<<1<<endl;
        }else{
            if(allzeros) cout<<0<<endl;
            else{
                   arr.push_back(0);
                   int ans =0;
                   for(int i=1;i<arr.size();i++){
                       if(arr[i]==0 && arr[i-1]!=0) ans++;
                   }
                   ans= min(ans,2);
                   cout<<ans<<endl;
            }
        }
        
    }
    
}
