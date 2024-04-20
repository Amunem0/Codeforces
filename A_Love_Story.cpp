#include<bits/stdc++.h>
using namespace std;

string a="codeforces";
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=a[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}