#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a,j,b[51];
		scanf("%d",&a);
		for(j=0;j<a;j++){
			scanf("%d",&b[j]);
		}
		int count = 0,k,h;
		for(k=0;k<j;k++){
			for(h=0;h<j-1;h++){
				int temp;
				if(b[h]>b[h+1]){
					temp = b[h];
					b[h]=b[h+1];
					b[h+1]=temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
	return 0;
}
	