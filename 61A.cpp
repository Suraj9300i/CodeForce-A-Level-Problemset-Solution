#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string x,y;
	cin>>x;
	cin>>y;

	int n = x.length();
	string s = "";
	for(int i=0;i<n;i++){
		if(x[i]==y[i])
			s += '0';
		else
			s += '1';
	}	
	cout<<s;
	return 0;
}