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
        sort(a,a+n);
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c++;
            }
        }
        cout<<n-c/2<<endl;
    }
}