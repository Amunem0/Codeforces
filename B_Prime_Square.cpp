#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j || i+j==n+1)
                    cout<<1<<" ";
                    else
                    cout<<0<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        else{
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(i==j || i+j==n+1 || (i==(n+1)/2 && (j==((n+1)/2)-1 || j==((n+1)/2)+1))|| (j==(n+1)/2 && (i==((n+1)/2)-1 || i==((n+1)/2)+1)))
                    cout<<1<<" ";
                    else
                    cout<<0<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
            

    }
}