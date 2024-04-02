#include<bits/stdc++.h>
using namespace std;

/*
a+c = 2*b 
*/

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x = 2*b ;
        if((a+c)%x ==0 ){
            cout<<"YES"<<endl;
        }else if(x>a+c){
            if((x-a) %c == 0 || (x-c)%a ==0){
                 cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
             cout<<"NO"<<endl;
        }
        
    }
    
}
