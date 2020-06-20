#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b,c,d;
	cin>>a>>b>>c>>d;
	set<int> s;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	s.insert(d);
	cout<<(4-s.size());


	return 0;
}