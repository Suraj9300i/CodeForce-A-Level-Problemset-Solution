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
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int mx = INT_MIN;
	int mxInd = -1;
	int mn = INT_MAX;
	int mnInd = -1;
	for(int i=0;i<n;i++){
		if(arr[i]>mx){
			mx = arr[i];
			mxInd = i;
		}
		if(arr[i]<=mn){
			mn = arr[i];
			mnInd = i;
		}
	}
	if(mxInd>mnInd){
		cout<<(mxInd+n-mnInd-2);
	}else{
		cout<<(mxInd+n-1-mnInd);
	}

	return 0;
}