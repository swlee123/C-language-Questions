#include<stdio.h>
int main(){
	int N,i,j,sqn[101]={0},T=1;//*initiate sqn[101]={0}first,
	//*if not it auto give u random 101 numbers,will affect the calculation below*//
	while(scanf("%d",&N)!=EOF){
	int flag=0;
	for(i=1;i<=N;i++){
		scanf("%d",&sqn[i]);
		if(sqn[i]<=sqn[i-1])flag=1;
			}//*first num is 0 rdy, so start with sqn[1]*//
	
	int sum[20001]={0};
	if (flag==0){
		for(i=1;i<=N;i++){
			for(j=i;j<=N;j++){
				if (sum[sqn[i]+sqn[j]]!=0)flag=1;
				sum[sqn[i]+sqn[j]]=1;
			}
		}
	}
	if(!flag){
	printf("Case #%d: It is a B2-Sequence.\n\n",T++);}
	else printf("Case #%d: It is not a B2-Sequence.\n\n",T++);
	
	}return 0;
}