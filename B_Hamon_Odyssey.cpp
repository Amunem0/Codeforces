#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        int temp=a[0];
        for(int i=0;i<n;i++){
            temp=temp&a[i];
            if(temp==0){
                c++;
                temp=(i+1<n?a[i+1]:0);
            }
        }
        if(c==0){
            c=1;
        }
        cout<<c<<endl;
    }
}