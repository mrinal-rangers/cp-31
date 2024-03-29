#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            int sum =0 ;
            while(sum<n){
                cout<<1<<" ";
                sum++;
            }cout<<endl;
        }
        else if(k>=3){
            if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            int sum =0 ;
                while(sum<n){
                    cout<<2<<" ";
                    sum+=2;
                }cout<<endl;
            }
            else{
            cout<<"YES"<<endl;
            cout<<1+(n-3)/2<<endl;
            int sum =0 ;
                while(sum<n-3){
                    cout<<2<<" ";
                    sum+=2;
                }
                cout<<3<<endl;
            }
        }
        else if(k==2){
            if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            int sum =0 ;
            while(sum<n){
                cout<<2<<" ";
                sum+=2;
            }cout<<endl;
            }
            else{cout<<"NO"<<endl;}
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
    
}

