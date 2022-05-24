#include<stdio.h>
int main(){
	const int N=1e5;
	int prefixsum[N+1]={0};
	int i,j,a,b;
	for(i=1,j=1;i<N;i++){
		if(i==j*j){
			prefixsum[i]=prefixsum[i-1]+1;
			j++;
		}
		else
		prefixsum[i]=prefixsum[i-1];
	}
	while(scanf("%d %d",&a,&b)&&a||b){
		printf("%d\n",prefixsum[b]-prefixsum[a-1]);
	}
	return 0;
	
	
}