#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	int arr[n];
	int p = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if((5-arr[i])>=k)
			p++;
	}
	cout<<p/3;


	return 0;
}