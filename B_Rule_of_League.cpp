#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(x==0&&y==0||x>0&&y>0){
            cout<<-1<<endl;
        }
        if(!x){
            swap(x,y);
        }
    int k=x;
    while(k<n){
        k+=x;
    }
    k-=x;
    if(n-k!=1){
        cout<<-1<<endl;
    }
    }
}