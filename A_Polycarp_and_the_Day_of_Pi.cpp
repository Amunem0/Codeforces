#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string pi="314159265358979323846264338327";
    while(t--){
        string n;
        cin>>n;
        int c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]!=pi[i]){
                break;
            }
            if(n[i]==pi[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }
}