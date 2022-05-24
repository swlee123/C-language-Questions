#include<stdio.h>

int main(){
	int i,grade[1000],c,n,above,sum;
	float percent,avg_s;
	scanf("%d",&c);
	while(c--){
		scanf("%d",&n);
		sum = 0;
	
		for(i=0;i<n;i++){
			scanf("%d",&grade[i]);
			sum += grade[i];
			
		}
		avg_s= sum/n;
		above = 0;
		for(i=0;i<n;i++){
			if(grade[i]>avg_s)above++;
			
		}
		percent=100.0*above/n;
		printf("%0.3f%%\n",percent);
		
		
	}
	return 0;
	
}