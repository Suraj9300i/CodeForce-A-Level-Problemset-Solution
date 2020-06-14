#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	n = n*2;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int mx = 0;
	int p = 0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			p -= arr[i];
		}else{
			p += arr[i];
			mx = max(mx,p);
		}
	}
	cout<<mx;

	return 0;
}