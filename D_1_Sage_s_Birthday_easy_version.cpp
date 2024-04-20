#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    sort(a,a+n);
    cout<<(n-1)/2<<endl;
    int b[n];
    int j=0;
    for(int i=1;i<n;i+=2,j++){
        b[i]=a[j];
    }
    for(int i=0;i<n;i+=2,j++){
        b[i]=a[j];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}