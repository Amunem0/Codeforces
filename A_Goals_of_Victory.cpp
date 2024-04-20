#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
    cin>>n;
    int a[n];
    int sum=0;
       for(int i=0;i<n-1;i++){
            cin>>a[i];
            sum+=a[i];
       }
       if(sum>0){
        cout<<(-1)*sum<<endl;
       }
       else{
        cout<<abs(sum)<<endl;
       }
    }
}