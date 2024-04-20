#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        a[0]=2;
        a[1]=3;
        int i=2;
        cout<<a[0]<<" "<<a[1]<<" ";
        while(i<n){
            a[i]=a[i-1]+1;
                while(3*a[i]%(a[i-2]+a[i-1])==0)
                a[i]++; 
                cout<<a[i]<<" ";
                i++;
        }
        cout<<endl;
    }
}