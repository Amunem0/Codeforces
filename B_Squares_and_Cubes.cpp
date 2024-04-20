#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        set<int>a;
        int n;
        cin>>n;
        for(int i=1;i*i<=n;i++){
            a.insert(i*i);
        }
        for(int i=1;i*i*i<=n;i++){
            a.insert(i*i*i);
        }
        cout<<a.size()<<endl;
    }
}