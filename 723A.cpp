#include<bits/stdc++.h>
using namespace std;

void countSteps(int a,int avg,int &steps){
	if(a>avg){
		steps += a-avg;
	}else{
		steps += avg-a;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int a,b,c;
	cin>>a>>b>>c;
	int avg = (a+b+c)/3;
	int steps = 0;
	countSteps(a,avg,steps);
	countSteps(b,avg,steps);
	countSteps(c,avg,steps);
	cout<<steps;

	return 0;
}