#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b>0){
            cout<<a*n+b*n<<endl;
        }
        else{
            int c=0;
            for(int i=1;i<n;i++){
                if(s[i]!=s[i-1])
                c++;
            }
            c++;
            cout<<a*n+((c/2)+1)*b<<endl;
        }
    }
}