#include <stdio.h>
#include<string.h>
int main(){
	char string[10005],dc;
	int i;
	while (scanf("%s",&string)!=EOF){
		
	for(i=0;i<strlen(string);i++){
		dc = string[i]-7;
		printf("%c",dc);
	}
	printf("\n");
	}
	return 0;
	
}