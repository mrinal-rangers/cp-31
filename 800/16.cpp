#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&arr){
    int n= arr.size();
    bool isSorted = true;
    int ans = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){isSorted= false; break;}
        else{
            int d= arr[i]-arr[i-1];
            ans = min(ans,d/2 + 1);
        }
    }
    if(!isSorted)cout<<0<<endl;
    else cout<<ans<<endl;
}

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
        helper(arr);
    }
    
    
}
