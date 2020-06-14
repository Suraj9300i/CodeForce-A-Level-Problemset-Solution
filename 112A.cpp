#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string x;
	string y;
	cin>>x;
	cin>>y;

	transform(x.begin(),x.end(),x.begin(),::tolower);
	transform(y.begin(),y.end(),y.begin(),::tolower);
	if(x==y)
		cout<<'0';
	else{
		bool com = lexicographical_compare(x.begin(),x.end(),y.begin(),y.end());
		if(com)
			cout<<"-1";
		else
			cout<<"1";
	}

	return 0;
}