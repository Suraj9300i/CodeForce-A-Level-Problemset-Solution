#include<bits\stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	string s = "";
	for(int i=0;i<n;i++){
		string b;
		cin>>b;
		s += b;
	}
	n = n*2;
	int res = 1;
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1])
			res++;
	}
	cout<<res;
	return 0;
}