#include<bits/stdc++.h>
using namespace std;

/*
x is even
0,1 => -1
0,2 => 1
0,3 => 4
0,4 => 0
0,5 => -5
0,6 => 1
0,7 => 8
0,8 => 0


x is odd
1,1 => 2.  3,1 => 4
1,2 => 0.  3,2 => 2
1,3 => -3. 3,3 => -1
1,4 => 1.  3,4 =>  3
1,5 => 6
1,6 => 0
1,7 => -7
1,8 => 1



*/

int main() {
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        if(x%2 == 0){
            int r= n%4;
            if(r == 0) cout<<x<<endl;
            if(r == 1) cout<<x-n<<endl;
            if(r == 2) cout<<x+1<<endl;
            if(r == 3) cout<<x+n+1<<endl;
        }else{
            int r= n%4;
            if(r == 0) cout<<x<<endl;
            if(r == 1) cout<<x+n<<endl;
            if(r == 2) cout<<x-1<<endl;
            if(r == 3) cout<<x-n-1<<endl;
        }
    }
    
}
