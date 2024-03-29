#include<bits/stdc++.h>
using namespace std;


int helper(vector<int>& arr){
    int n=arr.size();
    int two =0 ;
    for(auto x:arr){
        if(x==2)two++;
    }
    if(two %2) return -1;
    int curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==2) curr++;
        if(curr == two /2) return i+1;
    }
    return -1;
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
        cout<<helper(arr)<<endl;
    }
    
}
