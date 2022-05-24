#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b;
	while (cin>>a>>b){
		long long int day=1;
		while (day<=b){
		day+=a;
		a++;}
		cout<<a-1<<endl;
	}
	return 0;
}