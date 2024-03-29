#include<bits/stdc++.h>
using namespace std;


void helper(vector<int>& arr){
    int n=arr.size();
    sort(arr.rbegin(),arr.rend());
    if(arr[0]!=arr[1]){
        cout<<"YES"<<endl;
        for(auto x:arr){
            cout<<x<<" ";
        }cout<<endl;
    }else{
        bool flag = true;
        for(int i=2;i<n;i++){
            if(arr[i]!=arr[1]){
                swap(arr[1],arr[i]);
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(auto x:arr){
                cout<<x<<" ";
            }cout<<endl;
        }
    }
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
