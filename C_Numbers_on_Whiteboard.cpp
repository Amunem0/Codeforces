#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        int a=n,b=n-1;
        for(int i=0;i<n-1;i++){
            cout<<a<<" "<<b<<endl;
            a=(a+b+1)/2;
            b--;
        }
    }
}