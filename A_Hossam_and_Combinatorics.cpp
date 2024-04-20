#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll c1=0,c2=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int first=a[0];
        int last=a[n-1];
      
                for(int i=0;i<n;i++){
                if(a[i]==first){
                    c1++;
                }
                else if(a[i]==last){
                    c2++;
                }
            }
            if(first==last){
                cout<<n*(n-1)<<endl;
            }
            else{
                cout<<2*c1*c2<<endl;
            }
    }
}