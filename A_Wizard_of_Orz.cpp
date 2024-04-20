#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="989";
        if(n==1){
            cout<<s.substr(0,1)<<endl;
        }
        else if(n==2){
            cout<<s.substr(0,2)<<endl;
        }
        else if(n==3){
            cout<<s.substr(0,3)<<endl;
        }
        else{
            cout<<s;
            for(int i=0;i<n-3;i++){
                cout<<i%10;
            }
            cout<<endl;
        }
    }
}