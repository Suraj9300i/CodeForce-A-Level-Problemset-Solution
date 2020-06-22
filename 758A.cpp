#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	int mx = INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mx = max(mx,arr[i]);
	}
	int res = 0;
	for(int i=0;i<n;i++){
		if(arr[i]!=mx)
			res += (mx-arr[i]);
	}
	cout<<res;

	return 0;
}