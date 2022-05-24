#include<stdio.h>
int main(){
	
	int n,s=0;
	scanf("%d",&n);
	if(n>=0){
		s = n*(n+1)/2;}
	else {
		s = n*(1-n)/2+1;
	}
	printf("%d",s);
	return 0;

	
	
}