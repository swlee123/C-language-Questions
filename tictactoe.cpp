#include <stdio.h>
int win(char c);
int i,j;
char plant[4][4];
int win(char c){
	for(i=0;i<3;i++){
		for(j=0;j<3&&plant[i][j]==c;j++)
		if(j==2)return 1;
		for(j=0;j<3&&plant[j][i]==c;j++)
		if(j==2)return 1;
	}
	for(i=0;i<3 && plant[i][i]==c; i++){
	}if(i==2)return 1;
	for(i=0;plant[i][2-i]==c && i<3; i++){
	}if(i==2)return 1;
	
	return 0;
}
int main(){
	int n,flag,xcount,ocount;
	scanf("%d",&n);
		while(n--){
		flag = 1;
		xcount=0,ocount=0;
		for(i=0;i<3;i++){
				scanf("%s",plant[i]);
			}
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(plant[i][j]=='X')xcount++;
				else if(plant[i][j]=='O')ocount++;
			}
		}
		if(win('X') && win('O') )flag=0;
		if( ocount>xcount || xcount-ocount>1 )flag=0;
		if(win('O') && ocount!=xcount )flag=0;
		if(win('X') && ocount==xcount )flag=0;
		
		if(flag)printf("yes\n");
		else printf("no\n");
		
	}
	
	
	return 0;
}









