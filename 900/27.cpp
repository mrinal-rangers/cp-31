#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum =0 , max_ans =0,min_ans =0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            max_ans +=arr[i] /x + ((arr[i] % x) !=0);
        }
        min_ans = sum /x + (sum %x != 0);
        
        cout<<min_ans<<" "<<max_ans<<endl;
    }
    
}
