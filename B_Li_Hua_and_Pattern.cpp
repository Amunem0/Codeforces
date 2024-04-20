#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,k;
        cin>>n>>k;
        int a[n][n];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        int diff=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]!=a[n+1-i][n+1-j]){
                    diff++;
                }
            }
        }
        diff/=2;
        if(diff>k){
            cout<<"NO"<<endl;
        }
        else{
            k-=diff;
            if(n&1){
                cout<<"YES"<<endl;
            }
            else if(k&1){
                cout<<"NO"<<endl
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}