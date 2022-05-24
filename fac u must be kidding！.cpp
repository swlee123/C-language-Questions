#include<stdio.h>
long long fac(int n);
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if((n>=14||(n<0&&(-n)%2==1)))printf("Overflow!\n");
		else if((n<=7 || (n<0&&(-n)%2==0)))printf("Underflow!\n");
		else printf("%lld\n",fac(n));
	}
	return 0 ;
	
}
long long fac(int n){
	if(n==1)return 1;
	else return fac(n-1)*n;
}