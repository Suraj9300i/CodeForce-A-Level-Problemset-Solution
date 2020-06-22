#include<bits\stdc++.h>
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

	int res = 0;
	int police = 0;
	for(int i=0;i<n;i++){
		if(arr[i]!=-1)
			police += arr[i];
		else{
			if(police==0)
				res++;
			else
				police--;
		}
	}
	cout<<res;
	return 0;
}