#include<stdio.h>
int main(){
	int N,i,j,a;
	scanf("%d",&N);
	int milk[N];
	for(a=0;a<N;++a){
		scanf("%d",&milk[a]);
	}
	
	int temp;
	for(i=0;i<N-1;i++) {
		for(j=0;j<N-1-i;j++){
			if(milk[j]>milk[j+1]){
				temp = milk[j+1];
				milk[j+1]=milk[j];
				milk[j]=temp;
			}
		}
	}	
	printf("%d",milk[N/2]);
	return 0;
}
