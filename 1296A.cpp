#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		int arr[n];
		int sum = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];	
			if(arr[i]&1){
				sum += arr[i];
			}
		}
		if(sum&1)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}

	return 0;
}