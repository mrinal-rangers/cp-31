#include<bits/stdc++.h>
using namespace std;


void helper(vector<int>& arr){
    int n=arr.size();
    stack<int>st;
    st.push(arr[0]);
    int steps = 0;
    for(int i=1;i<n;i++){
        int x = arr[i];
        if(st.empty()){
            st.push(x);
            continue;
        }
        int t = st.top();
        if(t^x){
            st.push(x);
        }else{
            st.pop();
            steps++;
            arr[i] = t*x;
            i--;
        }
    }
    cout<<steps<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]= arr[i]%2;
        }
        helper(arr);
    }
    
}
