#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        int sz=freq.size();
     for(int i=1;i<=n;i++){
        cout<<max(sz,i)<<" ";
    }
    cout<<endl;
        
    }
}