#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int c=3*n;
        int start=1;
        int m=1;
       
            cout<<(n/2)+n%2<<endl;
            for(int i=1;i<=(n/2)+n%2;i++){
                cout<<start<<" "<<c<<endl;
                start+=3;
                c-=3;
            }
        
    }
}