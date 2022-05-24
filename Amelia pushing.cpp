#include<stdio.h>
int main(){
	int a,b,n,m;
	
	scanf("%d %d %d",&a,&b,&n);
	
	if( ((n-b)%(b-a))==0){
	
			m = 2*((n-b)/(b-a))+1;
			}
	else{
			m = 2*((n-b)/(b-a)+1)+1;
	}
	
	printf("%d",m);
	
	return 0;
}