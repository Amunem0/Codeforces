#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int cur=0;
        for(int i=1;i<=n;i+=2){
            for(int j=i;j<=n;j*=2){
                a[cur]=j;
                cur++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}