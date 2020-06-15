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

	int start = 0;
	int end = x.length()-1;
	while(start<end){
		swap(x[start],x[end]);
		start++;
		end--;
	}
	if(x==y)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}