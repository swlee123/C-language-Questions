#include <stdio.h>
int main(){
	int t,i,j;
	
	scanf("%d",&t);
	
	for(i=1;i<=t;i++){
		
		int visit = 0,x;
		
		for (j=0;j<4;j++){
			
			scanf("%d",&x);
			
			if (x>0)visit++;
		}
		
		switch (visit){
		
		case 0:{
			printf("Typically Otaku\n");
			break;
		}
		
		case 1:{
			printf("Eye-opener\n");
			break;}
			
		case 2 :{
			printf("Young Traveller\n");
			break;}
			
		case 3 :{
			printf("Excellent Traveller\n ");
			break;}
			
		default :{
			printf("Contemporary Xu Xiake\n");
			}
	}
	
		
	}
	return 0;
}