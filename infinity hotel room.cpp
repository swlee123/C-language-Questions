#include<iostream>
using namespace std;
int main(){
	int i=0,ans;
	long long int S,D;
	cin>>S>>D;
	for(;S<D;S++){
	
		
		ans=D-S;
		if (ans<=0){
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
	
	
}