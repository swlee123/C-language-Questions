#include<stdio.h>
int main(){
	int a,b;
	while (scanf("%d %d",&a,&b)==2)
	{int ans=0,c=0;
		if ((a+b)==0)return 0;
		
		for(int i=9;i>=0;i--)
		{
			c = (a%10+b%10+c)>9?1:0;
			
			ans+=c;
			
			a/=10,b/=10;
			
		}
		
	if (ans==0)printf("No carry operation.\n");
	
	else if (ans==1)printf("%d carry operation.\n",ans);
	
	else printf("%d carry operations.\n",ans);
		
	
	
		
	}
	return 0;
}