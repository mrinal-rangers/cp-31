#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4 || n%2){
            cout<<-1<<endl;
        }else{
            long long mini=0;
            long long m=n;
            long long four =4,six= 6;
            while(n%four){
                mini++;
                n-=6;
            }
            mini +=n/4;
            n=m;
            long long maxi = 0;
            while(n%six){
                maxi++;
                n = n-4;
            }
            maxi += n/6;
            cout<<maxi<<" "<<mini<<endl;
        }
        
    }
    
}
