#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    ll sx,sy;
    cin>>sx>>sy;
       vector<vector<int>>a = {{1,1},{1,m},{n,1},{n,m}};
    ll dist=-1;
    int ind1=0,ind2=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                ll len = abs(sx-a[i][0])+abs(sy-a[i][1]);
                if(dist<2*len){
                    dist=2*len;
                    ind1=i;
                    ind2=i;
                }
            }
            else{
                ll len1 = abs(sx-a[i][0])+abs(sy-a[i][1])+abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1])+abs(sx-a[j][0])+abs(sy-a[j][1]);
                ll len2 = abs(sx-a[j][0])+abs(sy-a[j][1])+abs(a[i][0]-a[j][0])+abs(a[i][1]-a[j][1])+abs(sx-a[i][0])+abs(sy-a[i][1]);
                ll len=min(len1,len2);
                if(dist<len){
                    dist=len;
                    ind1=i;
                    ind2=j;
                }
            }
        }
    }
    cout<<a[ind1][0]<<" "<<a[ind1][1]<<" "<<a[ind2][0]<<" "<<a[ind2][1]<<endl;
      

    }
    
}
