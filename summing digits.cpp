#include<stdio.h>
#include<string.h>
int main(){
	char temp[1000];
	int n,len,sum,i,j;
	while(gets(temp)){
		len =strlen(temp);
		if(temp[0]=='0')break;
		sum=0;
		for(i=0;i<len;i++){
			sum=sum+temp[i]-'0';	
		}
		while(sum>9){
			int count =0;
			while(sum){
				count += sum%10;
				sum/=10;
			}
			sum = count;
		}
		printf("%d\n",sum);
	
			
	}
	return 0;
}


//*#include<stdio.h>
//#include<string.h>
//int main(){
	//char temp[1000];
	//int n,len,sum,i,j;
//	while(gets(temp)){
//		len =strlen(temp);
//		if(temp[0]=='0')break;
//		sum=0;
//		for(i=0;i<len;i++){
//			sum=sum+temp[i]-'0';	
//		}
//		while(sum>9){
//			int a,b;
//			a = sum %10;
//			b = sum/10;
//			sum = a+b;
//		}
//		printf("%d\n",sum);
	
			
//	}
//	return 0;
//}//