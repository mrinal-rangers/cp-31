#include<bits/stdc++.h>
using namespace std;
/*
min diff = 3, diff = 4

a b c
b a c
b c a
c b a
*/

int helper(vector<int>&arr){
    int n= arr.size();
    int ans= 0;
    for(int i=0;i<n;i++){
        int x= arr[i];
        int diff = abs(x-i-1);
        if(diff){ans = __gcd(ans,diff);}
    }
   
    return ans;
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
