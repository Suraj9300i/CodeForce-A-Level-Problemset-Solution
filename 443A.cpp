#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string str;
	getline(cin,str);
	int n = str.length();
	set<int> s;
	for(int i=0;i<n;i++){
		int k = str[i];
		if(k>=97&&k<=122)
			s.insert(k);
	}
	cout<<s.size();
	return 0;
}