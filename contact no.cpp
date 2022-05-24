#include<stdio.h>
void input();
void output();
struct contact{
		char name[100];
		long long num;

	}con[100];
int main(){
	
	printf("Please input 3 persons into contact list:\n");
	input();
	output();
	return 0;
	
	
}
void input(){
	for(int i=0;i<3;i++){
		printf("%d Name:",i+1);
		scanf("%s",&con[i].name);
		printf("  Number:",i+1);
		scanf("%lld",&con[i].num);
	}
	printf("\n");
}
void output(){
	printf("People in contact list:\n");
	for(int i=0;i<3;i++){
		printf("%s\n",con[i].name);
		printf("%lld\n",con[i].num);	
	}	
}