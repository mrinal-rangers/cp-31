#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int mini = INT_MAX , maxi = INT_MIN ;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i!=0)maxi = max(maxi,arr[i]);
            if(i!=n-1)mini = min(mini,arr[i]);
        }
        int ans = max(arr[n-1] - mini , maxi -arr[0]);
        maxi = INT_MIN;
        for(int i=0;i<n-1;i++){
            maxi = max(maxi,arr[i] -arr[i+1]);
        }
        ans = max(ans,maxi);
        ans = max(ans,arr[n-1]-arr[0]);
        if(n==1) ans = 0;
        cout<<ans<<endl;
    }
    
}
