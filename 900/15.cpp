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
        int turns = 0;
        for(int i=n-2;i>=0;i--){
            int last = arr[i+1];
            if(last==0) {
                turns = -1;
                break;
            }
            while(last <= arr[i]){
                turns++;
                arr[i]=arr[i]/2;
            }
        }
        cout<<turns<<endl;
        
    }
    
}
