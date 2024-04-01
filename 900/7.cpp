#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int maxi = 0 ,i=0,j=0;
        while(j<n){
            if(j!=0 && v[j]-v[j-1] >k){
                i= j;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        cout<<n -maxi<<endl;
        
    }
    
}
