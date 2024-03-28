#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int first = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(first==0) first= a;
        }
        if(first == 1)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
}

/*

1 2 3 4 5
1 2 3 5 4
1 2 5 3 4
1 5 2 3 4
1 4 5 2 3 -> 1 4 2 3 5 -> 1 2 3 4 5
1 4 5 3 2 -> 1 4 3 2 5 -> 1 3 2 4 5 -> 1 2 3 4 5

smallest element 

*/