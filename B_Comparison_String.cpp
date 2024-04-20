#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cons=1,ans=1;
        string s;
        cin>>s;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                cons=1;
            }
            else{
                cons++;
            }
            ans=max(ans,cons);
        }
        cout<<ans+1<<endl;
    }
}