#include <iostream>
using namespace std;
int main(){
	int i,n,m,ans;
	while(cin>>n,n){
		ans=m=0;
		for(i=1;m+i<=n;m+=i++){
			ans+=i*i;
		}
		ans +=(n-m)*i;
		cout<<n<<" "<<ans<<endl;
	}
	return 0;
}