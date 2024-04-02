#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long sum = 0;
        vector<int>v;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
                v.push_back(x);
            }
        }
        
        reverse(v.begin(),v.end());
        int x = n/2;
        int count = 0;
        int y = 0;
        for(int i=0;i<v.size();i++){
            if(count == x) {
                sum += v[i];
                count =0;
                y++;
                if(y==k) break;
            }
            else count ++;
        }
        cout<<sum<<endl;
    
        
        
    }
    
}
