#include <stdio.h>
int min(int a,int b);
int main(){
	
		int p2=1,p3=1,p5=1,i,n;
		long long a[1501]={0,1};
		for(i=2;i<=1500;i++){
			a[i]=min(a[p2]*2,min(a[p3]*3,a[p5]*5));
			if(a[i]==a[p2]*2)p2++;
			if(a[i]==a[p3]*3)p3++;
			if(a[i]==a[p5]*5)p5++;
		}
	while(scanf("%d",&n)){
		if(n==0)break;
		printf("%d\n",a[n]);
	
	}
	return 0;
}

int min(int a,int b){
	if(a>b)return b;
	else return a;
	
}