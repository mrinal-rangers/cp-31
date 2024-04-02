#include<bits/stdc++.h>
using namespace std;

/*
best question 
I wasnt able to solve this 
link : https://www.youtube.com/watch?time_continue=312&v=RH50o8xXsF0&embeds_referring_euri=https%3A%2F%2Fwww.google.com%2Fsearch%3Fq%3DAB%2BBalance%26rlz%3D1C5CHFA_enIN966IN966%26oq%3DAB%2BBalance%26gs_lcrp%3DEgZjaHJvbWUyCQgAEEUYORiABDIHCAEQABiABD&source_ve_path=MTM5MTE3LDEzOTExNywxMzkxMTcsMjM4NTE&feature=emb_title


make the first and last element same
*/

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        s[0] = s[n-1];
        cout<<s<<endl;
        
    }
    
}
