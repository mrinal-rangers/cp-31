#include<bits/stdc++.h>
using namespace std;

/*
0 -> 1,
1-> 2
2->3

if(i<5) val = i+1
else val = 10-i
*/

int main() {
    int t;
    cin>>t;
    vector<int>v= {1,2,3,4,5,5,4,3,2,1};
    while(t--){
        int ans= 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char c;
                cin>>c;
                if(c=='X'){
                    ans += min(v[i] ,v[j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    
}
