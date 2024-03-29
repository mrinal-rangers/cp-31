#include<bits/stdc++.h>
using namespace std;

/*
2 length
1 10 gcd= 1
a b  gcd(a,b)<=2 => 1,2 

*/

void helper(vector<long long>& arr){
    int n=arr.size();
    bool flag= false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(arr[i],arr[j]) <=2) {
                flag= true; 
                break;
            }
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        helper(arr);
    }
    
}
