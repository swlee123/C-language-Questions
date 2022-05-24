#include<stdio.h>
int main(){
	int i,j,n,a;
	int stop[20010];
	int x = 1;   
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);	
		for(i=1;i<a;i++){
			scanf("%d",&stop[i]);
		}
		int ans=0,sum=0,r1=1,r2=0,ans_r1=1,ans_r2=0;
		for(i=1;i<a;i++){
			sum+=stop[i];r2=i+1;
			if(sum<0){
			r1=i+1;sum=0;	}
			else if(sum>ans||(sum==ans&&r2-r1>ans_r2-ans_r1))
			{ans = sum;ans_r2=r2;ans_r1=r1;
			}
			}
			if(ans>0)printf("The nicest part of route %d is between stops %d and %d\n",x++,ans_r1,ans_r2);
			else printf("Route %d has no nice parts\n",x++); 	
}   
return 0;
}                                                  
	
		
	
		
		
		
	