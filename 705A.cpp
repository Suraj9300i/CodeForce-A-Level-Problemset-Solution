#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	bool isHate = true;
	while(n>0){
		if(isHate){
			cout<<"I hate ";
			isHate = false;
		}
		else{
			cout<<"I love ";
			isHate = true;
		}
		n--;
		if(n!=0)
			cout<<"that ";
		else
			cout<<"it";
	}

	return 0;
}