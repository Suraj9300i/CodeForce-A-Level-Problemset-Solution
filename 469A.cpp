#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,p,q;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++)
		arr[i] = 0;
	cin>>p;
	for(int i=0;i<p;i++){
		int k;
		cin>>k;
		arr[k] = 1;
	}
	cin>>q;
	for(int i=0;i<q;i++){
		int k;
		cin>>k;
		arr[k] = 1;
	}
	for(int i=1;i<=n;i++){
		if(!arr[i]){
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";
	return 0;
}