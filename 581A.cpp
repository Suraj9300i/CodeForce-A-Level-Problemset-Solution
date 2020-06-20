#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b;
	cin>>a>>b;
	if(a<b)
		swap(a,b);
	int diff = b;
	int same = (a-b)/2;
	cout<<diff<<" "<<same;

	return 0;
}