#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1) a++;
            else b++;
        }
        int steps=0;
        while(b>a){
            b--;
            a++;
            steps++;
        }
        steps +=  b%2;
        cout<<steps<<endl;
    }
    
    
}
