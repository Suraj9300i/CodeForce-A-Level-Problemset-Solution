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

	int anton = 0;
	for(int i=0;i<n;i++){
		if(s[i]=='A')
			anton++;
	}
	int danik = n-anton;
	if(anton==danik)
		cout<<"Friendship";
	else if(anton>danik)
		cout<<"Anton";
	else
		cout<<"Danik";
	return 0;
}