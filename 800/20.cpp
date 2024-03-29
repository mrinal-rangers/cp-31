#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int x= arr[i];
        cout<< n-x+1 <<" ";
    }cout<<endl;
    
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
