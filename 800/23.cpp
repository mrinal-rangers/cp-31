#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = c-a ;
        int y = d-b;
        int steps=-1;
        if( y>=0 && x<=y){
            steps = 2*y -x;
        }
        cout<<steps<<endl;
    }
    
}