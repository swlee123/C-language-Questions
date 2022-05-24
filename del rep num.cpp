#include<stdio.h>
void check();
void del(int*n,int j);
int a[5];
int*p;
int main(){
	int i,n;
	p=a;
	printf("Please enter 5 numbers:\n");
	for(i=0;i<5;i++,p++){
		scanf("%d",p);
	}
	check();
	printf("The new array is :\n");
	for(i=0;i<4;i++){
		printf("%d\n",a[i]);		
	}
}
void check(){
	int*ptr=&a[0];
	int i,j;
	for(int*l_1=ptr,i=0;i<5;i++,l_1++){
		for(int*l_2=l_1+1,j=i+1;j<5;j++,l_2++){
			if(*l_1==*l_2)del(l_2,j);
		}
	}
}
void del(int*n,int j){
	for(;j<4;j++,n++){
		(*n)=(*(n+1));
	}
}


