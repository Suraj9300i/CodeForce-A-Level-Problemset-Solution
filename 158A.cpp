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
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int res = 0;
	int tr = arr[k];
	for(int i=0;i<n;i++){
		if(arr[i]>=tr && arr[i]>0)
			res++;
	}
	cout<<res;

	return 0;
}