#include<bits/stdc++.h>
using namespace std;
int sum1(int n){
    int sum=0;
    for(int i=0;i<3;i++){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int sum2(int n){
    int sum=0;
    for(int i=0;i<6;i++){
        if(i<3){
            n = n / 10;
        }
        else{
            sum = sum + n % 10;
            n = n / 10;
        }
       
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        a=sum1(n);
        b=sum2(n);
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}