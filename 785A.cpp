#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int res = 0;
	while(n-->0){
		string s;
		cin>>s;
		if(s=="Tetrahedron")
			res += 4;
		else if(s=="Cube")
			res += 6;
		else if(s=="Octahedron")
			res += 8;
		else if(s=="Dodecahedron")
			res += 12;
		else if(s=="Icosahedron")
			res += 20;
	}
	cout<<res;

	return 0;
}