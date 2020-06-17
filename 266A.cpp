#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	string s;
	cin>>s;
	int res = 0;
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1])
			res++;
	}
	cout<<res;
	return 0;
}