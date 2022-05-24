#include<stdio.h>
#include<string.h>
int recur(int,int,int);
int f[21][21][21];
int main(){
	memset(f,0,sizeof(f));
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		if(a==-1&&b==-1&&c==-1)return 0;
		printf("w(%d, %d, %d)=%d\n",a,b,c,recur(a,b,c));
	}
	return 0;
	
}
int recur(int a,int b,int c){
	if(a<=0||b<=0||c<=0)return 1;
	else if(a>20||b>=20||c>20)return recur(20,20,20);
	else if(f[a][b][c]) return f[a][b][c];
	else if(a<b&&b<c)return f[a][b][b]=recur(a,b,c-1)+recur(a,b-1,c-1)-recur(a,b-1,c);
	else return f[a][b][c]=recur(a-1,b,c)+recur(a-1,b-1,c)+recur(a-1,b,c-1)-recur(a-1,b-1,c-1);
}