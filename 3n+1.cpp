#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,i,ans,m,n;
	while(cin>>a>>b){
	ans = 0;
	c=max(a,b);
	d=min(a,b);
	for (n=d;n<=c;n++){
		for(i=1,m=n;m>1;i++){
			if(m%2==0)m/=2;
			else m = 3*m+1;
			
		}
		if (i>ans)ans=i;
	}
	cout<< a <<" "<< b <<" "<< ans << endl;
	

}
    return 0;

}