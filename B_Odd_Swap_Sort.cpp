#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
 cin>>n;
 int a[n+1];
 vector<int> b,c;
 for(int i=1;i<=n;i++){
   cin>>a[i];
   if(a[i]%2)
      b.push_back(a[i]);
   else
      c.push_back(a[i]);
 }
 int ok=1;
 for(int i=0;i+1<b.size();i++)
      if(b[i]>b[i+1])
         ok=0;
 for(int i=0;i+1<c.size();i++)
      if(c[i]>c[i+1])
         ok=0;
 if(ok)
   cout<<"Yes\n";
 else
   cout<<"No\n";
}
}