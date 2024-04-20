
using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	cin >> n;
	priority_queue<int> pq[n+1];
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		pq[a].push(b);
	}
		
		ll ans=0;
		for(int i=1;i<n+1;i++){
			int j=1;
			while(pq[i].size() && j<=i){
				ans+=pq[i].top();
				pq[i].pop();
				j++;
			}
		}
		cout<<ans<<endl;

	}
	
}
