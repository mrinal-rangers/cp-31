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
        for(int i=0;i<n;i++){
            if(arr[i]==1) arr[i]++;
        }
        for(int i=1;i<n;i++){
            if(arr[i]%arr[i-1] == 0){
                arr[i]++;
            }
        }
        for(auto x:arr){
            cout<<x<<" ";
        }cout<<endl;
    }
    
}
