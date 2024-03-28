#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool b= true;
        for(int i=1;i<n;i++){
            if(a[i]!=a[0]) b=false;
        }
        if(n<2 || b){
             cout<<-1<<endl;
        }else{
            int count = 0;
            for(int i=0;i<n;i++){
            if(a[i]==a[n-1]) count++;
            }
            
            cout<<n-count<<" "<<count<<endl;
            for(int i=0;i<n-count;i++){
                cout<<a[i]<<" ";
            }cout<<endl;
            while(count --) cout<<a[n-1]<<" ";
            cout<<endl;
        }
        
    }
    
}
