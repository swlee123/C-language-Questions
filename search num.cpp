#include<stdio.h>
int find(int n,int*p);
int a[5];
int main(){
	int*p;
	int i,n;
	p=a;
	printf("Please enter 5 numbers:\n");
	for(i=0;i<5;i++,p++){
		scanf("%d",p);
	}
	printf("Search for:");
	scanf("%d",&n);
	if (find(n,a))printf("It is the %dth element\n",find(n,a));
	else printf("It is not inside the array");
}
int find(int n,int*p){
	int j,i=0;
	for(j=0;j<5;j++,p++){
		if(*p==n)return i+1;
		i+=1;
	}
	return 0;
}