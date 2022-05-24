#include<stdio.h>
void bub_sort(int*,int);
int main(){
	int cow[10001],i,n;
	int*p;
	p=cow;
	scanf("%d",&n);
	for(i=0;i<n;i++,p++){
		scanf("%d",p);
	}
	bub_sort(cow,n);
	p=cow;
	printf("%d",*(p+n/2));
}
void bub_sort(int*pt,int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++,pt++){
			if(*pt>*(pt+1)){
				temp = *(pt+1);
				*(pt+1)=*pt;
				*pt=temp;
			}
		}
	}
}